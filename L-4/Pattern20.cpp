/*
   1 1 1 1
     2 2 2
       3 3
         4
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i-1;
        while(j){
            cout<<" "<<" ";
            j--;
        }
        int k=n-i+1;
        while(k){
            cout<<i<<" ";
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}