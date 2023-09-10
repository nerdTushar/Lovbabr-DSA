#include <iostream>
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

bool isCircularList(Node* head){
    // empty list
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;
    while(temp != head && temp != NULL){
        temp = temp -> next;
    }
    if(temp == NULL){
        return false;
    }
    return true;
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

bool isCircularListSingly(SinglyNode* headSingly){
    // empty list
    if(headSingly == NULL){
        return true;
    }

    SinglyNode* temp = headSingly -> next;
    while(temp != headSingly && temp != NULL){
        temp = temp -> next;
    }
    if(temp == NULL){
        return false;
    }
    return true;
}

int main(){
    Node* tail = NULL;

    // empty list mein insert krre hai
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);

    if(isCircularList(tail)){
        cout<<"List is circular."<<endl;
    }else{
        cout<<"List is not circular."<<endl;
    }

    // Singly Linked List
    SinglyNode* node1 = new SinglyNode(10);
    SinglyNode* headSingly = node1;
    SinglyNode* tailSingly = node1;
    
    printSingly(headSingly);
    insertAtTailSingly(tailSingly,12);
    printSingly(headSingly);
    insertAtTailSingly(tailSingly,15);

    if(isCircularListSingly(headSingly)){
        cout<<"List is circular."<<endl;
    }else{
        cout<<"List is not circular."<<endl;
    }
    return 0;
}