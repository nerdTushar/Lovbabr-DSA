#include <iostream>
#include <vector>
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

Node* getMid(Node* head){
    Node* slow = head;
    Node* fast = head -> next;
    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next;
        if(fast -> next != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }
    return slow;
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

bool isPalindrome2(Node* head){
    if(head == NULL || head -> next == NULL){
        return true;
    }
    // step 1 : find middle
    Node* middle = getMid(head);
    // step 2 : reverse list after middle
    Node* temp = middle -> next;
    middle -> next = reverse(temp);
    // step 3 : compare both halves
    Node* head1 = head;
    Node* head2 = middle -> next;
    while(head2 != NULL){
        if(head1 -> data != head2 -> data){
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    // step 4 : repeat step 2 (optional)
    temp = middle -> next;
    middle -> next = reverse(temp);
    return true;
}

bool isPalindrome1(Node* head){
    vector<int> arr;
    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp -> data);
        temp = temp -> next;
    }
    int s = 0;
    int e = arr.size()-1;
    while(s<e){
        if(arr[s] == arr[e]){
            s++;
            e--;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail,2);
    insertAtTail(tail,2);
    insertAtTail(tail,4);
    print(head);
    cout<<"Head : "<<head -> data<<endl;
    cout<<"Tail : "<<tail -> data<<endl;

    // bool ans = isPalindrome1(head);
    bool ans = isPalindrome2(head);
    if(ans){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}