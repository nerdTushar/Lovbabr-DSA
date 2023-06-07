/*
         1
       2 2
     3 3 3
   4 4 4 4
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i;
        while(j){
            cout<<" "<<" ";
            j--;
        }
        // int k=i;
        // while(k){
        //     cout<<i<<" ";
        //     k--;
        // }
        int k=1;
        while(k<=i){
            cout<<i<<" ";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}