#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeQueue(queue<int> &q){
    vector<int> ans;
    stack<int> s;
    int mid = q.size() / 2;
    
    for(int i=0;i<mid;i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    for(int i=0;i<mid;i++){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    
    for(int i=0;i<mid;i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    while(!s.empty()){
        int val = s.top();
        s.pop();
        ans.push_back(val);
        val = q.front();
        q.pop();
        ans.push_back(val);
    }
    
    return ans;
}

int main(){
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);

    vector<int> ans = rearrangeQueue(q);

    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}