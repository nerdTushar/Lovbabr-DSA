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

void insertAtTail(Node* &tail, int d){
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

Node* reverse(Node* head){
    Node* previous = NULL;
    Node* curr = head;
    while(curr != NULL){
        Node* forward = curr -> next;
        curr -> next = previous;
        previous = curr;
        curr = forward;
    }
    return previous;
}

void insertAtEnd(Node* &head,Node* &tail,int val){
    Node* temp = new Node(val);
    // empty list
    if(head == NULL){
       head = temp;
       tail = temp;
       return;
    }else{
       tail -> next = temp;
       tail = temp;
    }
}

Node* add(Node* first,Node* second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first != NULL || second != NULL || carry != 0){
        int val1 = 0;
        if(first != NULL){
            val1 = first -> data;
        }
        int val2 = 0;
        if(second != NULL){
            val2 = second -> data;
        }
        int sum = carry + val1 + val2;
        int digit = sum % 10;
        // create node and add in answer linked list
        insertAtEnd(ansHead,ansTail,digit);
        carry = sum / 10;
        if(first != NULL)
          first = first -> next;
        if(second != NULL)
          second = second -> next;
    }
    return ansHead;
}

Node* addTwoLists(Node* first,Node* second){
    // step 1 : reverse input linked lists
    first = reverse(first);
    second = reverse(second);
    // step 2 : add two linked lists
    Node* ans = add(first,second);
    // step 3 : reverse answer
    ans = reverse(ans);
    return ans;
}

int main(){
    Node* node1 = new Node(4);
    Node* head1 = node1;
    Node* tail1 = node1;
    insertAtTail(tail1,5);
    print(head1);
    cout<<"Head : "<<head1 -> data<<endl;
    cout<<"Tail : "<<tail1 -> data<<endl;
    Node* node2 = new Node(3);
    Node* head2 = node2;
    Node* tail2 = node2;
    insertAtTail(tail2,4);
    insertAtTail(tail2,5);
    print(head2);
    cout<<"Head : "<<head2 -> data<<endl;
    cout<<"Tail : "<<tail2 -> data<<endl;
    Node* ans = addTwoLists(head1,head2);
    print(ans);
    return 0;
}