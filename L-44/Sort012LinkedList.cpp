#include <iostream>
#include <map>
using namespace std;

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

void sort012Singly1(SinglyNode* &headSingly,SinglyNode* &tailSingly){
    // empty list
    if(headSingly == NULL || headSingly -> next == NULL){
        return;
    }

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    SinglyNode* temp = headSingly;
    while(temp != NULL){
        if(temp -> data == 0){
            zeroCount++;
        }
        else if(temp -> data == 1){
            oneCount++;
        }
        else{
            twoCount++;
        }
        temp = temp -> next;
    }
    temp = headSingly;
    while(temp != NULL){
        if(zeroCount != 0){
            temp -> data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp -> data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp -> data = 2;
            twoCount--;
        }
        temp = temp -> next;
    }
}

void insertAtEnd(SinglyNode* &tail,SinglyNode* curr){
    tail -> next = curr;
    tail = curr;
}

void sort012Singly2(SinglyNode* &headSingly,SinglyNode* &tailSingly){
    // Write your code here.
    SinglyNode* zeroHead = new SinglyNode(-1);
    SinglyNode* zeroTail = zeroHead;
    SinglyNode* oneHead = new SinglyNode(-1);
    SinglyNode* oneTail = oneHead;
    SinglyNode* twoHead = new SinglyNode(-1);
    SinglyNode* twoTail = twoHead;

    // create separate list for 0s, 1s, 2s
    SinglyNode* curr = headSingly;
    while(curr != NULL){
        int value = curr -> data;
        if(value == 0){
            insertAtEnd(zeroTail,curr);
        }else if(value == 1){
            insertAtEnd(oneTail,curr);
        }else{
            insertAtEnd(twoTail,curr);
        }
        curr = curr -> next;
    }

    // merge 3 sublist
    if(oneHead -> next != NULL){  
        // 1's list non-empty
        zeroTail -> next = oneHead -> next;
    }else{  
        // 1's list empty
        zeroTail -> next = twoHead -> next;
    }
    oneTail -> next = twoHead -> next;
    twoTail -> next = NULL;
    tailSingly = twoTail;

    // setup head
    headSingly = zeroHead -> next;

    // delete dummy nodes
    zeroHead -> next = NULL;
    delete zeroHead;
    oneHead -> next = NULL;
    delete oneHead;
    twoHead -> next = NULL;
    delete twoHead;
}

int main(){
    // Singly Linked List
    SinglyNode* node1 = new SinglyNode(1);
    SinglyNode* headSingly = node1;
    SinglyNode* tailSingly = node1;
    insertAtTailSingly(tailSingly,0);
    insertAtTailSingly(tailSingly,2);
    insertAtTailSingly(tailSingly,1);
    insertAtTailSingly(tailSingly,0);
    insertAtTailSingly(tailSingly,2);
    insertAtTailSingly(tailSingly,1);
    printSingly(headSingly);
    cout<<"head : "<< headSingly -> data <<endl;
    cout<<"tail : "<< tailSingly -> data <<endl;
    sort012Singly2(headSingly,tailSingly);
    printSingly(headSingly);
    cout<<"head : "<< headSingly -> data <<endl;
    cout<<"tail : "<< tailSingly -> data <<endl;
    return 0;
}