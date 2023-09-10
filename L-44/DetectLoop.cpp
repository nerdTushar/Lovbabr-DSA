#include <iostream>
#include <map>
using namespace std;

class Node {
    public:
      int data;
      Node* next;

      // constructor
      Node(int d){
        this -> data = d;
        this -> next = NULL;
      }

      // destructor
      ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
      }
};

void insertNode(Node* &tail,int element,int d){
  
  // empty list
  if(tail == NULL){
    Node* newNode = new Node(d);
    tail = newNode;
    newNode -> next = newNode;
  }else{
    // non empty list
    // assuming that the element is present in the list
    Node* curr = tail;
    bool found = false;
    do{
      if(curr -> data == element){
        found = true;
        break;
      }else{
        curr = curr -> next;
      }
    }while(curr != tail);
    // while(curr -> data != element){
    //   curr = curr -> next;
    // }
    // element found -> curr is representing element wala node
    if(found){
      Node* temp = new Node(d);
      temp -> next = curr -> next;
      curr -> next = temp;
    }
  }
}

void print(Node* &tail){
    Node* temp = tail;
    // empty list
    if(tail == NULL){
      cout<<"List is empty"<<endl;
      return;
    }
    do{
      cout<<temp -> data<<" ";
      temp = temp -> next;
    }while(temp != tail);
    cout<<endl;
}

bool detectLoop(Node* head){
    // empty list
    if(head == NULL){
        return false;
    }

    map<Node*,bool> visited;

    Node* temp = head;

    while(temp != NULL){
        // cycle is present
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

// Creation of Node
class SinglyNode {
    public:
      int data;
      SinglyNode* next;

      // constructor
      SinglyNode(int data){
        this -> data = data;
        this -> next = NULL;
      }

      // destructor
      ~SinglyNode(){
        int value = this -> data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
      }
};

void insertAtTailSingly(SinglyNode* &tailSingly, int d){
    // new node
    SinglyNode* temp = new SinglyNode(d);
    tailSingly -> next = temp;
    tailSingly = temp;
}

void printSingly(SinglyNode* &headSingly){
    SinglyNode* temp = headSingly;
    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

bool detectLoopSingly(SinglyNode* headSingly){
    // empty list
    if(headSingly == NULL){
        return false;
    }

    map<SinglyNode*,bool> visited;

    SinglyNode* temp = headSingly;

    while(temp != NULL){
        // cycle is present
        if(visited[temp] == true){
            cout<<"Present on element "<<temp -> data<<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

SinglyNode* floydDetectLoopSingly(SinglyNode* headSingly){
    // empty list
    if(headSingly == NULL){
        return NULL;
    }
    SinglyNode* slow = headSingly;
    SinglyNode* fast = headSingly;
    while(slow != NULL && fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
        if(slow == fast){
            cout<<"Present on element "<<slow -> data<<endl;
            return fast;
        }
    }
    return NULL;
}

SinglyNode* getStartingNodeSingly(SinglyNode* headSingly){
    // empty list
    if(headSingly == NULL){
        return NULL;
    }
    SinglyNode* fast = floydDetectLoopSingly(headSingly);
    if(fast == NULL){
        return NULL;
    }
    SinglyNode* slow = headSingly;
    while(slow != fast){
        slow = slow -> next;
        fast = fast -> next;
    }
    return slow;
}

void removeLoopSingly(SinglyNode* headSingly){
    // empty list
    if(headSingly == NULL){
        return;
    }

    SinglyNode* startOfLoop = getStartingNodeSingly(headSingly);
    if(startOfLoop == NULL){
        return;
    }
    SinglyNode* temp = startOfLoop;
    while(temp -> next != startOfLoop){
        temp = temp -> next;
    }
    temp -> next = NULL;
}

int main(){
    Node* tail = NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);

    // Singly Linked List
    SinglyNode* node1 = new SinglyNode(10);
    SinglyNode* headSingly = node1;
    SinglyNode* tailSingly = node1;
    insertAtTailSingly(tailSingly,12);
    insertAtTailSingly(tailSingly,15);
    insertAtTailSingly(tailSingly,4);
    insertAtTailSingly(tailSingly,9);
    // tailSingly -> next = headSingly -> next;
    // printSingly(headSingly);
    // if(detectLoopSingly(headSingly)){
    //    cout<<"Loop is present"<<endl;
    // }else{
    //     cout<<"Loop is not present"<<endl;
    // }
    if(floydDetectLoopSingly(headSingly) != NULL){
       cout<<"Loop is present"<<endl;
    }else{
        cout<<"Loop is not present"<<endl;
    }
    SinglyNode* ans = getStartingNodeSingly(headSingly);
    if(ans != NULL){
       cout<<"Starting node of loop "<<ans -> data<<endl;
    }else{
        cout<<"Empty List"<<endl;
    }
    removeLoopSingly(headSingly);
    printSingly(headSingly);
    cout<<"head : "<<headSingly -> data<<endl;
    cout<<"tail : "<<tailSingly -> data<<endl;
    return 0;
}