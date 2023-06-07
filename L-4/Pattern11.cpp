/*
   A B C
   D E F
   G H I
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    char ch='A';
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}