#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    vector<int> a = {1,2,3,4,5,6,7};
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> b(5,2);
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Capacity : "<<v.capacity()<<endl;  // capacity() method

    v.push_back(1);                           // push_back(value) method
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity : "<<v.capacity()<<endl;
    cout<<"Size : "<<v.size()<<endl;          // size() method

    cout<<"Element at 2nd index : "<<v.at(2)<<endl;  // at(index) method

    cout<<"First element : "<<v.front()<<endl;  // front() method

    cout<<"Last element : "<<v.back()<<endl;  // back() method

    cout<<"Before pop : ";
    for(int i:v){
        cout<<i<<" ";
    }
    
    v.pop_back();  // pop_back() method

    cout<<endl<<"After pop : ";
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl<<"Before clear size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.clear();  // clear() method

    cout<<"After clear size : "<<v.size()<<endl;
    cout<<"Capacity : "<<v.capacity()<<endl;

    return 0;
}