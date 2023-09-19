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

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
}

int main(){
    stack<int> myStack;
    myStack.push(7);
    myStack.push(1);
    myStack.push(4);
    myStack.push(5);
    int x = 9;

    stack<int> ans = pushAtBottom(myStack,x);
    while(!ans.empty()){
        cout<<ans.top()<<endl;
        ans.pop();
    }
    return 0;
}