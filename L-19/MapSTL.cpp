#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,string> m;

    m[1] = "Tushar";
    m[13] = "Lalit";
    m[2] = "Aman";

    m.insert({5,"Payal"});  // insert({key,value}) method -> O(log n)

    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<" ";
    }
    cout<<endl;

    cout<<"13 is present or not : "<<m.count(13)<<endl;  // count(key) method -> O(log n)

    m.erase(2);    // erase(key) method -> O(log n)
    for(auto i:m){
        cout<<i.first<<" : "<<i.second<<" ";
    }
    cout<<endl;

    auto it = m.find(1);    // find(key) method -> O(log n)
    cout<<(*it).first<<endl;

    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<" ";
    }
    cout<<endl;

    cout<<"Size : "<<m.size()<<endl;  // size() method
    return 0;
}