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

Node* solve(Node* first,Node* second){
    // if only one element is present in first list
    if(first -> next == NULL){
        first -> next = second;
        return first;
    }

    Node* curr1 = first;
    Node* next1 = curr1 -> next;
    Node* curr2 = second;
    Node* next2 = curr2 -> next;

    while(next1 != NULL && curr2 != NULL){
        if(curr2 -> data >= curr1 -> data && curr2 -> data <= next1 -> data){
            // add node in between the first list
            curr1 -> next = curr2;
            next2 = curr2 -> next;
            curr2 -> next = next1;
            // update pointers
            curr1 = curr2;
            curr2 = next2;
        }else{
            curr1 = next1;
            next1 = next1 -> next;
            if(next1 == NULL){
                curr1 -> next = curr2;
                return first;
            }
        }
    }
    return first;
}

Node* sortTwoLists(Node* first,Node* second){
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }

    if(first -> data <= second -> data){
        return solve(first,second);
    }else{
        return solve(second,first);
    }
}

int main(){
    Node* node1 = new Node(1);
    Node* head1 = node1;
    Node* tail1 = node1;
    insertAtTail(tail1,4);
    insertAtTail(tail1,5);
    print(head1);
    cout<<"Head : "<<head1 -> data<<endl;
    cout<<"Tail : "<<tail1 -> data<<endl;

    Node* node2 = new Node(2);
    Node* head2 = node2;
    Node* tail2 = node2;
    insertAtTail(tail2,3);
    insertAtTail(tail2,5);
    print(head2);
    cout<<"Head : "<<head2 -> data<<endl;
    cout<<"Tail : "<<tail2 -> data<<endl;

    Node* ans = sortTwoLists(head1,head2);
    print(ans);
    return 0;
}