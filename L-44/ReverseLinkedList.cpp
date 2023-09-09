#include <iostream>
using namespace std;

// Creation of Node
class Node {
    public:
      int data;
      Node* next;

      // constructor
      Node(int data){
        this -> data = data;
        this -> next = NULL;
      }

      // destructor
      ~Node(){
        int value = this -> data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
      }
};

void insertAtHead(Node* &head, int d,Node* &tail){
    // empty list
    if(head == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        head = newNode;
        return;
    }
    // new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d, Node* &head){
    // empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        head = newNode;
        return;
    }
    // new node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

void reverseLinkedList(Node* &head,Node* &tail){
    Node* prev = NULL;
    Node* curr = head;
    while(curr != NULL){
        Node* forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    tail = head;
    head = prev;
}

void reverseLinkedListRecursion(Node* &head,Node* prev,Node* curr,Node* &tail){
    // base case
    if(curr == NULL){
        tail = head;
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    curr -> next = prev;
    reverseLinkedListRecursion(head,curr,forward,tail);
}

Node* reverseLinkedListRecursion1(Node* &head,Node* &tail){
    // base case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node* chotaHead = reverseLinkedListRecursion1(head -> next,tail);

    head -> next -> next = head;
    head -> next = NULL;
    tail = head;
    return chotaHead;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(tail,3,head);
    insertAtTail(tail,5,head);
    insertAtTail(tail,7,head);
    insertAtTail(tail,9,head);
    print(head);
    cout<<"head : "<<head -> data<<endl;
    cout<<"tail : "<<tail -> data<<endl;

    // reverseLinkedList(head,tail);

    // Node* prev = NULL;
    // Node* curr = head;
    // reverseLinkedListRecursion(head,prev,curr,tail);

    Node* ans = reverseLinkedListRecursion1(head,tail);
    head = ans;

    print(head);
    cout<<"head : "<<head -> data<<endl;
    cout<<"tail : "<<tail -> data<<endl;
    return 0;
}
