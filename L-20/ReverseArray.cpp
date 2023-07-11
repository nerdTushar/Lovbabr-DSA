#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reverseArray(vector<int> v){
    int s=0,e=v.size()-1;
    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v){
    for(int i:v){
        cout<<i<<" ";
    }
}

int main(){
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    vector<int> ans = reverseArray(v);

    print(ans);
    return 0;
}