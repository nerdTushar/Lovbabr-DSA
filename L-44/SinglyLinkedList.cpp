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
};

void insertAtHead(Node* &head, int d){
    // new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
    // new node
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, int position, int d){
    
    // insert at start
    if(position == 1){
        insertAtHead(head,22);
        return;
    }

    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp -> next;
        count++;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    // created a new node
    Node* node1 = new Node(10);
    // cout<< node1 -> data <<endl;
    // cout<< node1 -> next <<endl;

    // head pointed to node1
    Node* head = node1;

    // tail pointed to node1
    Node* tail = node1;
    
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtPosition(head,1,22);
    print(head);
    return 0;
}