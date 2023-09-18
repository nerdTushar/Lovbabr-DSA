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

Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head -> next;
    while(fast -> next != NULL){
        fast = fast -> next;
        if(fast -> next != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
}

Node* merge(Node* left,Node* right){
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }
    Node* ans = new Node(-1);
    Node* temp = ans;

    // merge 2 sorted linked list
    while(left != NULL && right != NULL){
        if(left -> data <= right -> data){
            temp -> next = left;
            temp = left;
            left = left -> next;
        }else{
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }

    while(left != NULL){
        temp -> next = left;
        temp = left;
        left = left -> next;
    }

    while(right != NULL){
        temp -> next = right;
        temp = right;
        right = right -> next;
    }

    return ans -> next;
}

Node* mergeSort(Node* head){
    // base case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    // break linked list into two halves, after finding mid
    Node* mid = findMid(head);

    Node* left = head;
    Node* right = mid -> next;
    mid -> next = NULL;

    // recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);

    // merge both left and right halves
    Node* result = merge(left,right);

    return result;
}

int main(){
    Node* node1 = new Node(4);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail,2);
    insertAtTail(tail,8);
    insertAtTail(tail,5);
    print(head);
    cout<<"Head : "<<head -> data<<endl;
    cout<<"Tail : "<<tail -> data<<endl;

    Node* ans = mergeSort(head);
    print(ans);
    return 0;
}