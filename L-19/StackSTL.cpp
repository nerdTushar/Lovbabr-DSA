#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Tushar");  // push(value) method
    s.push("Aman");
    s.push("Lalit");

    cout<<"Top element : "<<s.top()<<endl;  // top() method

    s.pop();  // pop() method
    cout<<"Top element : "<<s.top()<<endl;

    cout<<"Size : "<<s.size()<<endl;  // size() method

    cout<<"Empty or not : "<<s.empty()<<endl;  // empty() method
    return 0;
}