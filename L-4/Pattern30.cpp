/*
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
         int j=1;
          int c=n;
         while(j<=i){
            cout<<c<<" ";
            c--;
            j++;
         }
         cout<<endl;
         i++;
    }
    return 0;
}