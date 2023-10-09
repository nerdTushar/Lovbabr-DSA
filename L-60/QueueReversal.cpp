#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        stack<int> s;
        
        while(!q.empty()){
            int element = q.front();
            q.pop();
            s.push(element);
        }
        
        while(!s.empty()){
            int element = s.top();
            s.pop();
            q.push(element);
        }
        
        return q;
    }
};

int main(){
    Solution s;

    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(10);
    q.push(2);
    q.push(6);

    queue<int> ans = s.rev(q);
    
    while(!ans.empty()){
        cout<<ans.front()<<" ";
        ans.pop();
    }
    return 0;
}