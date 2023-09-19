#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &inputStack, int count, int size){
    // base case
    if(count == size/2){
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // recursive call
    solve(inputStack,count + 1,size);

    inputStack.push(num);
}

void deleteMiddle(stack<int> &inputStack, int N){
    int count = 0;
    solve(inputStack,count,N);
}

int main(){
    stack<int> inputStack;
    int N;

    inputStack.push(5);
    inputStack.push(6);
    inputStack.push(7);
    inputStack.push(8);

    N = inputStack.size();

    cout<<"Top element : "<<inputStack.top()<<endl;

    deleteMiddle(inputStack,N);

    while(!inputStack.empty()){
        cout<<inputStack.top()<<endl;
        inputStack.pop();
    }

    return 0;
}