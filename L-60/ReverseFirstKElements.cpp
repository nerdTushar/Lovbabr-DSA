#include <bits/stdc++.h>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k) {
    // algo
    // step 1 : pop first k from Q and put into stack
    stack<int> s;
    
    for(int i=0;i<k;i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    // step 2 : fetch from stack and push into Q
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    // step 3 : fetch first (n-k) element from Q and push back
    int t = q.size() - k;
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    
    return q;
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;

    queue<int> ans = modifyQueue(q,k);

    while(!ans.empty()){
        cout<<ans.front()<<" ";
        ans.pop();
    }
    return 0;
}