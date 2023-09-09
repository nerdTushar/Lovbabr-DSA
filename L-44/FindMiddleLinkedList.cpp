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

int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
}

void findMiddle(Node* &head){
    int len = getLength(head);
    int mid = (len/2) + 1;
    Node* temp = head;
    for(int i=1;i<mid;i++){
        temp = temp -> next;
    }
    cout<<"Middle : "<<temp -> data<<endl; 
}

Node* getMiddle(Node* &head){
    if(head == NULL || head -> next == NULL){
        return head;
    }else if(head -> next -> next == NULL){
        return head -> next;
    }else{
        Node* slow = head;
        Node* fast = head -> next;
        while(fast != NULL){
          fast = fast -> next;
          if(fast != NULL){
            fast = fast -> next;
          }
          slow = slow -> next;
        }
        return slow;
    }
    
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(tail,3,head);
    insertAtTail(tail,5,head);
    insertAtTail(tail,7,head);
    insertAtTail(tail,9,head);
    // insertAtTail(tail,12,head);
    print(head);
    cout<<"head : "<<head -> data<<endl;
    cout<<"tail : "<<tail -> data<<endl;
    // findMiddle(head);
    Node* ans = getMiddle(head);
    cout<<"Middle : "<<ans -> data<<endl;
    return 0;
}
