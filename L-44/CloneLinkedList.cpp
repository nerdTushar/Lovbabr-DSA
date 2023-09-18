#include <iostream>
#include <unordered_map>
using namespace std;

// Creation of Node
class Node {
    public:
      int data;
      Node* next;
      Node* random;

      // constructor
      Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> random = NULL;
      }

      // destructor
      ~Node(){
        int value = this -> data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }else if(this -> random != NULL){
            delete random;
            this -> random = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
      }
};

void insertAtTail(Node* &tail, int d){
    // new node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
    tail -> random = NULL;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtEnd(Node* &head,Node* &tail,int d){
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail -> next = newNode;
    tail = newNode;
}

Node* cloneList1(Node* head){
    // step 1 : create a clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;
    while(temp != NULL){
        insertAtEnd(cloneHead,cloneTail,temp -> data);
        temp = temp -> next;
    }

    // step 2 : create a map
    unordered_map<Node*,Node*> oldToNewNode;
    Node* originalNode = head;
    Node* cloneNode = cloneHead;
    while(originalNode != NULL && cloneNode != NULL){
        oldToNewNode[originalNode] = cloneNode;
        originalNode = originalNode -> next;
        cloneNode = cloneNode -> next;
    }

    // step 3 : set random pointer of clone list
    originalNode = head;
    cloneNode = cloneHead;
    while(originalNode != NULL){
        cloneNode -> random = oldToNewNode[originalNode -> random];
        originalNode = originalNode -> next;
        cloneNode = cloneNode -> next;
    }
    return cloneHead;
}

void printRandom(Node* head){
    int count = 1;
    while(head != NULL){
        cout<<"node"<<count<<" -> random : "<<head -> random -> data<<endl;
        count++;
        head = head -> next;
    }
}

Node* cloneList2(Node* head){
    // step 1 : create a clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;

    Node* temp = head;
    while(temp != NULL){
        insertAtEnd(cloneHead,cloneTail,temp -> data);
        temp = temp -> next;
    }

    // step 2 : cloneNodes add in between original list
    Node* originalNode = head;
    Node* cloneNode = cloneHead;
    while(originalNode != NULL && cloneNode != NULL){
        Node* forward = originalNode -> next;
        originalNode -> next = cloneNode;
        originalNode = forward;

        forward = cloneNode -> next;
        cloneNode -> next = originalNode;
        cloneNode = forward;
    }

    // step 3 : random pointer copy
    temp = head;
    while(temp != NULL){
        if(temp -> next != NULL){
            temp -> next -> random = temp -> random ? temp -> random -> next : temp -> random;
        }
        temp = temp -> next -> next;
    }

    // step 4 : revert changes done in step 2
    originalNode = head;
    cloneNode = cloneHead;
    while(originalNode != NULL && cloneNode != NULL){
        originalNode -> next = cloneNode -> next;
        originalNode = originalNode -> next;

        if(originalNode != NULL){
            cloneNode -> next = originalNode -> next;
        }
        cloneNode = cloneNode -> next;
    }

    // step 5 : return ans
    return cloneHead;
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    Node* temp1 = tail;
    insertAtTail(tail,2);
    Node* temp2 = tail;
    insertAtTail(tail,3);
    Node* temp3 = tail;
    insertAtTail(tail,4);
    Node* temp4 = tail;
    insertAtTail(tail,5);
    Node* temp5 = tail;
    temp1 -> random = temp3;
    cout<<"node1 -> random : "<<temp1 -> random -> data<<endl;
    temp2 -> random = temp1;
    cout<<"node2 -> random : "<<temp2 -> random -> data<<endl;
    temp3 -> random = temp5;
    cout<<"node3 -> random : "<<temp3 -> random -> data<<endl;
    temp4 -> random = temp3;
    cout<<"node4 -> random : "<<temp4 -> random -> data<<endl;
    temp5 -> random = temp2;
    cout<<"node5 -> random : "<<temp5 -> random -> data<<endl;
    print(head);
    cout<<"Head : "<<head -> data<<endl;
    cout<<"Tail : "<<tail -> data<<endl;

    Node* ans = cloneList2(head);
    print(ans);
    printRandom(ans);
    return 0;
}