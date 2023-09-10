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

bool isPossible(int k,Node* current){
    int count = 1;
    while(current != NULL && count < k){
        current = current -> next;
        count++;
    }
    if(count == k){
        return true;
    }else{
        return false;
    }
}

Node* kReverse(Node* &head,int k,Node* &tail){
    // base case
    if(head == NULL){
        return head;
    }

    // step 1 : reverse k node list
    Node* prev = NULL;
    Node* curr = head;
    int count = 0;
    if(isPossible(k,curr)){
        while(curr != NULL && count < k){
            Node* forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
            count++;
        }
    }else{
        return curr;
    }

    if(prev == tail){
       tail = head;
    }

    // step 2 : recursive call
    head -> next = kReverse(curr,k,tail);

    // step 3 : return head of reversed linked list
    return prev;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(tail,5,head);
    insertAtTail(tail,4,head);
    insertAtTail(tail,3,head);
    insertAtTail(tail,7,head);
    insertAtTail(tail,9,head);
    insertAtTail(tail,2,head);
    print(head);
    cout<<"Head : "<<head -> data<<endl;
    cout<<"Tail : "<<tail -> data<<endl;

    int k = 4;

    Node* ans = kReverse(head,k,tail);
    head = ans;
    print(head);
    cout<<"Head : "<<head -> data<<endl;
    cout<<"Tail : "<<tail -> data<<endl;
    return 0;
}
