#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls,int k,int mid){
    int cowsCount=1;
    int lastPos=stalls[0];
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastPos >= mid){
            cowsCount++;
            if(cowsCount==k){
                return true;
            }
            lastPos=stalls[i];
        }
    }
    return false;
}

int main(){
    // int stalls[5]={4,2,1,3,6};
    vector<int> stalls = {4,2,1,3,6};
    sort(stalls.begin(),stalls.end());
    int k=2;
    int s=0,maxi=-1;
    for(int i=0;i<stalls.size();i++){
       maxi = max(maxi,stalls[i]);
    }
    int e=maxi,mid=0,ans=-1;
    while(s<=e){
         mid=s + (e-s)/2;
         if(isPossible(stalls,k,mid)){
            ans = mid;
            s=mid+1;
         }
         else{
            e=mid-1;
         }
    }
    cout<<ans<<endl;
    return 0;
}