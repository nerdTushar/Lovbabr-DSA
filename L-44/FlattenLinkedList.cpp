#include <iostream>
using namespace std;

// Creation of Node
class Node {
    public:
      int data;
      Node* next;
      Node* child;

      // constructor
      Node(int data){
        this -> data = data;
        this -> next = NULL;
        this -> child = NULL;
      }

      // destructor
      ~Node(){
        int value = this -> data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        if(this -> child != NULL){
            delete child;
            this -> child = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
      }
};

void insertAtTail(Node* &tail, int d){
    // new node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtChild(Node* &down,int d){
    // new node
    Node* temp = new Node(d);
    down -> child = temp;
    down = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

Node* merge(Node* down,Node* right){
    if(right == NULL){
        return down;
    }

    Node* newNode = new Node(-1);
    Node* temp = newNode;
    while(down != NULL && right != NULL){
        if(down -> data <= right -> data){
            temp -> child = down;
            temp = down;
            down = down -> child;
        }else{
            temp -> child = right;
            temp = right;
            if(right -> next == NULL){
                right = right -> child;
            }else{
                right = right -> next;
            }
        }
    }
    while(down != NULL){
        temp -> child = down;
        temp = down;
        down = down -> child;
    }
    while(right != NULL){
        temp -> child = right;
        temp = right;
        right = right -> next;
    }
    return newNode -> child;
} 

Node* flattenLinkedList(Node* head){
    // base case - empty linked list
	if(head == NULL){
        return NULL;
    }
     
    // 1 case solve krna hai
    Node* down = head;
    Node* right = head -> next;
    head -> next = NULL;

    // recursive call
    right = flattenLinkedList(right);

    // merge 2 sorted linked lists
    Node* ans = merge(down,right);
    return ans;
}

void printChild(Node* head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> child;
    }
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    Node* tail1 = tail;
    insertAtChild(tail1,2);
    insertAtChild(tail1,3);
    insertAtTail(tail,4);
    Node* tail2 = tail;
    insertAtChild(tail2,5);
    insertAtChild(tail2,6);
    insertAtTail(tail,7);
    Node* tail3 = tail;
    insertAtChild(tail3,8);
    insertAtTail(tail,9);
    Node* tail4 = tail;
    insertAtChild(tail4,12);
    insertAtTail(tail,20);
    print(head);
    cout<<"Head : "<<head -> data<<endl;
    cout<<"Tail : "<<tail -> data<<endl;

    Node* ans = flattenLinkedList(head);
    printChild(ans);
    return 0;
}