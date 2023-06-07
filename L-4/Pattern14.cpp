/*
   A
   B C
   D E F
   G H I J
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    char count='A';
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}