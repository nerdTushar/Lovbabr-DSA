#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Tushar");  // push(value) method
    q.push("Aman");
    q.push("Lalit");

    int n = q.size();
    for(int i=0;i<n;i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    cout<<"Size before pop : "<<q.size()<<endl;  // size() method

    q.pop();  // pop() method

    cout<<"First element : "<<q.front()<<endl;  // front() method
    cout<<"Last element : "<<q.back()<<endl;    // back() method
    cout<<"Size after pop : "<<q.size()<<endl;
    return 0;
}