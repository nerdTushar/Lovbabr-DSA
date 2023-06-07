/*
   * * * *
   * * *
   * *
   * 
   * 
   * *
   * * *
   * * * *
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i+1;
        while(j){
            cout<<"*"<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
    int k=1;
    while(k<=n){
       int l=1;
       while(l<=k){
         cout<<"*"<<" ";
         l++;
       }
       cout<<endl;
       k++;
    }
    return 0;
}