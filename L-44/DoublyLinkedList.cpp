#include <iostream>
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

// getting length of linked list
int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void insertAtHead(Node* &head,int d,Node* &tail){
    if(head == NULL){
        Node* node1 = new Node(d);
        head = node1;
        tail = node1;
    }else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
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

void insertAtPosition(Node* &head,int position,int d,Node* &tail){
    // insert at start
    if(position == 1){
        insertAtHead(head,d,tail);
        return;
    }
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp -> next;
        count++;
    }

    // insert at last
    if(temp -> next == NULL){
        insertAtTail(tail,d,head);
        return;
    }

    // creating a node for d
    Node* insertToNode = new Node(d);
    insertToNode -> next = temp -> next;
    temp -> next -> prev = insertToNode;
    insertToNode -> prev = temp;
    temp -> next = insertToNode;
}

void deleteNode(int position,Node* &head,Node* &tail){
    // deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        // memory free start node
        head -> prev = NULL;
        temp -> next = NULL;
        delete temp;
    }else{
        // deleting any middle node or last node
        Node* curr = head;
        Node* previous = NULL;
        int count = 1;
        while(count < position){
            previous = curr;
            curr = curr -> next;
            count++;
        }

        // deleting last node
        if(curr -> next == NULL){
            tail = previous;
            curr -> prev = NULL;
            previous -> next = NULL;
            delete curr;
            return;
        }
        curr -> next -> prev = previous;
        previous -> next = curr -> next;
        curr -> prev = NULL;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    // Node* node1 = new Node(10);

    // Node* head = node1;
    // Node* tail = node1;
    Node* head = NULL;
    Node* tail = NULL;
    // print(head);

    // cout<< getLength(head) <<endl;

    insertAtHead(head,11,tail);
    print(head);

    insertAtHead(head,13,tail);
    print(head);

    insertAtHead(head,8,tail);
    print(head);

    insertAtTail(tail,25,head);
    print(head);
    cout<<"head : "<< head -> data <<endl;
    cout<<"tail : "<< tail -> data <<endl;

    insertAtPosition(head,2,100,tail);
    print(head);
    insertAtPosition(head,1,101,tail);
    print(head);
    insertAtPosition(head,7,102,tail);
    print(head);
    cout<<"head : "<< head -> data <<endl;
    cout<<"tail : "<< tail -> data <<endl;

    deleteNode(1,head,tail);
    print(head);
    cout<<"head : "<< head -> data <<endl;
    cout<<"tail : "<< tail -> data <<endl;
    return 0;
}