#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool knows(vector<vector<int>> &M,int a,int b,int n){
    if(M[a][b] == 1){
        return true;
    }else{
        return false;
    }
}

int celebrity(vector<vector<int>> &M,int n){
    stack<int> s;
    // step 1 : push all elements in stack
    for(int i=0;i<n;i++){
        s.push(i);
    }

    // step 2 : get 2 elements and compare them
    while(s.size() > 1){
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if(knows(M,a,b,n)){
            s.push(b);
        }else{
            s.push(a);
        }
    }
    
    int candidate = s.top();
    // step 3 : single element in stack is potential celebrity
    // so verify it
    int zeroCount = 0;
    for(int i=0;i<n;i++){
        if(M[candidate][i] == 0){
            zeroCount++;
        }
    }
    // all 0's
    if(zeroCount != n){
        return -1;
    }

    // column check
    int oneCount = 0;
    for(int i=0;i<n;i++){
        if(M[i][candidate] == 1){
            oneCount++;
        }
    }
    // all 1's
    if(oneCount != n-1){
        return -1;
    }

    return candidate;
}

int main(){
    vector<vector<int>> M = {{0,1,0},
                             {0,0,0}, 
                             {0,1,0}};
    int n = 3;

    int ans = celebrity(M,n);
    cout<<"Celebrity : "<<ans<<endl;
    return 0;
}