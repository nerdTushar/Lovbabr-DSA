#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>& myStack, int x){
    // base case
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    // recursive call
    solve(myStack,x);

    myStack.push(num);
}

void reverseStack(stack<int> &stack) {
    // base case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);

    solve(stack,num);
}

int main(){
    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);

    stack<int> temp = myStack;

    while(!temp.empty()){
        cout<<temp.top()<<endl;
        temp.pop();
    }

    cout<<endl;
    reverseStack(myStack);

    while(!myStack.empty()){
        cout<<myStack.top()<<endl;
        myStack.pop();
    }
    return 0;
}