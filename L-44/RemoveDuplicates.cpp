#include <iostream>
#include <map>
using namespace std;

class Node {
    public:
      int data;
      Node* prev;
      Node* next;

      // constructor
      Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
      }

      // destructor
      ~Node(){
        int value = this -> data;
        if(this -> next != NULL && this -> prev != NULL){
            delete next;
            this -> next = NULL;
            delete prev;
            this -> prev = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
      }
};

// traversing a linked list
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail,int d,Node* &head){
    if(tail == NULL){
        Node* node1 = new Node(d);
        head = node1;
        tail = node1;
    }else{
        Node* temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

void removeDuplicatesSorted(Node* &head,Node* &tail){
    // empty list
    if(head == NULL){
        return;
    }

    Node* curr = head;
    while(curr != NULL){
        if((curr -> next != NULL) && curr -> data == curr -> next -> data){
            Node* temp = curr -> next;
            // deleting last node
            if(temp -> next == NULL){
                curr -> next = temp -> next;
                tail = curr;
            }else{
                curr -> next = temp -> next;
                temp -> next -> prev = temp -> prev;
            }
            temp -> next = NULL;
            temp -> prev = NULL;
            delete(temp);
        }else{
            curr = curr -> next;
        }
    }
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

void removeDuplicatesSinglySorted(SinglyNode* &headSingly,SinglyNode* &tailSingly){
    // empty list
    if(headSingly == NULL){
        return;
    }

    SinglyNode* curr = headSingly;
    while(curr != NULL){
        if((curr -> next != NULL) && curr -> data == curr -> next -> data){
            SinglyNode* temp = curr -> next;
            if(temp -> next == NULL){
                tailSingly = curr;
            }
            curr -> next = temp -> next;
            temp -> next = NULL;
            delete temp;
        }else{
            curr = curr -> next;
        }
    }
}

void removeDuplicatesSinglyUnsorted1(SinglyNode* &headSingly,SinglyNode* &tailSingly){
    // empty list or 1 node
    if(headSingly == NULL || headSingly -> next == NULL){
        return;
    }

    SinglyNode* curr = headSingly;
    while(curr != NULL){
        SinglyNode* previous = curr;
        SinglyNode* temp = curr -> next;
        while(temp != NULL){
            if(temp -> data == curr -> data){
                previous -> next = temp -> next;
                temp -> next = NULL;
                delete temp;
                temp = previous -> next;
                if(temp == NULL){
                   tailSingly = previous;
                }
            }else{
                previous = temp;
                temp = temp -> next;
            }
        }
        curr = curr -> next;
    }
}

void removeDuplicatesSinglyUnsorted2(SinglyNode* &headSingly,SinglyNode* &tailSingly){
    // empty list or 1 node
    if(headSingly == NULL || headSingly -> next == NULL){
        return;
    }

    map<int,bool> visited;
    SinglyNode* previous = NULL;
    SinglyNode* temp = headSingly;
    while(temp != NULL){
        // delete duplicate element
        if(visited[temp -> data] == true){
            previous -> next = temp -> next;
            temp -> next = NULL;
            delete temp;
            temp = previous -> next; 
            if(temp == NULL){
                tailSingly = previous;
            }
        }else{
            visited[temp -> data] = true;
            previous = temp;
            temp =  temp -> next;
        }
    }
}

int main(){
    // Node* head = NULL;
    // Node* tail = NULL;
    // insertAtTail(tail,1,head);
    // insertAtTail(tail,2,head);
    // insertAtTail(tail,2,head);
    // insertAtTail(tail,2,head);
    // insertAtTail(tail,3,head);
    // insertAtTail(tail,3,head);
    // print(head);
    // cout<<"head : "<< head -> data <<endl;
    // cout<<"tail : "<< tail -> data <<endl;
    // removeDuplicatesSorted(head,tail);
    // print(head);
    // cout<<"head : "<< head -> data <<endl;
    // cout<<"tail : "<< tail -> data <<endl;


    // Singly Linked List
    SinglyNode* node1 = new SinglyNode(4);
    SinglyNode* headSingly = node1;
    SinglyNode* tailSingly = node1;
    insertAtTailSingly(tailSingly,2);
    insertAtTailSingly(tailSingly,5);
    insertAtTailSingly(tailSingly,4);
    insertAtTailSingly(tailSingly,2);
    insertAtTailSingly(tailSingly,2);
    printSingly(headSingly);
    cout<<"head : "<< headSingly -> data <<endl;
    cout<<"tail : "<< tailSingly -> data <<endl;
    // removeDuplicatesSinglySorted(headSingly,tailSingly);
    removeDuplicatesSinglyUnsorted2(headSingly,tailSingly);
    printSingly(headSingly);
    cout<<"head : "<< headSingly -> data <<endl;
    cout<<"tail : "<< tailSingly -> data <<endl;
    return 0;
}