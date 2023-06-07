/*
         1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1
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
        int k=1;
        while(k<=i){
           cout<<k<<" ";
           k++;
        }
        int l=i-1;
        while(l){
            cout<<l<<" ";
            l--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}