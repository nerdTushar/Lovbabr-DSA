#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &stack, int x){
	// base case
	if(stack.empty() || stack.top() < x){
		stack.push(x);
		return;
	}

	int n = stack.top();
	stack.pop();

	// recursive call
	sortedInsert(stack,x);

	stack.push(n);
}

void sortStack(stack<int> &stack)
{
	// base case
	if(stack.empty()){
		return;
	}

	int num = stack.top();
	stack.pop();

	// recursive call
	sortStack(stack);

	sortedInsert(stack,num);
}

int main(){
    stack<int> myStack;
    myStack.push(5);
    myStack.push(-2);
    myStack.push(9);
    myStack.push(-7);
    myStack.push(3);

    stack<int> temp = myStack;
    while(!temp.empty()){
        cout<<temp.top()<<endl;
        temp.pop();
    }

    cout<<endl;
    sortStack(myStack);

    while(!myStack.empty()){
        cout<<myStack.top()<<endl;
        myStack.pop();
    }
    return 0;
}