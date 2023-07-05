#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_front(2);  // push_front(value) method
    d.push_back(1);   // push_back(value) method
    d.push_back(4);
    d.push_front(3);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();  // pop_back() method
    d.pop_front();  // pop_front() method
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Element at 1 index : "<<d.at(1)<<endl;  // at(index) method

    cout<<"First element : "<<d.front()<<endl;  // front() method

    cout<<"Last element : "<<d.back()<<endl;  // back() method

    cout<<"Empty or not : "<<d.empty()<<endl;  // empty() method

    cout<<"Before erase : "<<d.size()<<endl;  // size() method
    d.erase(d.begin(),d.begin()+1);           // erase(range) method
    cout<<"After erase : "<<d.size()<<endl; 
    for(int i:d){
        cout<<i<<" ";
    }
    return 0;
}