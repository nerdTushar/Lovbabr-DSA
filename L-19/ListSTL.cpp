#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l;

    list<int> n(5,100);
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> p(n);
    for(int i:p){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);  // push_back(value) method
    l.push_front(2);  // push_front(value) method
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(4);
    l.push_front(3);
    l.pop_back();    // pop_back() method
    l.pop_front();   // pop_front() method

    l.erase(l.begin());  // erase(iterator) method
    cout<<"After erase : ";
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size : "<<l.size()<<endl;  // size() method
    return 0;
}