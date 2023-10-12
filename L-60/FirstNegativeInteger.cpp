#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    deque<long long int> dq;
    vector<long long> ans;
    
    // process first window of k size
    for(int i=0;i<K;i++){
        if(A[i] < 0){
            dq.push_back(i);
        }
    }
    
    // store answer of first k sized window
    if(dq.size() > 0){
        ans.push_back(A[dq.front()]);
    }else{
        ans.push_back(0);
    }
    
    // process for remaining windows
    for(int i=K;i<N;i++){
        // removal
        if(!dq.empty() && i-dq.front() >= K){
            dq.pop_front();
        }
        
        // addition
        if(A[i] < 0){
            dq.push_back(i);
        }
        
        // answer store
        if(dq.size() > 0){
            ans.push_back(A[dq.front()]);
        }else{
            ans.push_back(0);
        } 
    }
    
    return ans;
 }

int main(){
    long long int A[] = {-8, 2, 3, -6, 10};
    int N = 5;
    int K = 2;

    vector<long long> ans = printFirstNegativeInteger(A,N,K);

    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}