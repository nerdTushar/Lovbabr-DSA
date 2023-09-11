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

void sort012Singly(SinglyNode* &headSingly,SinglyNode* &tailSingly){
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
    sort012Singly(headSingly,tailSingly);
    printSingly(headSingly);
    cout<<"head : "<< headSingly -> data <<endl;
    cout<<"tail : "<< tailSingly -> data <<endl;
    return 0;
}