#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);  // insert(value) method -> O(log n)
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    s.erase(s.begin());  // erase(iterator) method -> O(log n)
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"-5 is present or not : "<<s.count(-5)<<endl;  // count(value) method -> O(log n)

    set<int>::iterator itr = s.find(1);  // find(value) method -> O(log n)
    cout<<*itr<<endl;

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"Size : "<<s.size()<<endl;  // size() method  -> O(1)
    return 0;
}