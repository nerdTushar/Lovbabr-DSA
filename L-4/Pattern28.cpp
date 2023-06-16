#include <iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=i){
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     int k=n-i;
    //     while(k){
    //         cout<<"*"<<" ";
    //         k--;
    //     }
    //     int m=n-i;
    //     while(m){
    //         cout<<"*"<<" ";
    //         m--;
    //     }
    //     int p=i;
    //     while(p){
    //         cout<<p<<" ";
    //         p--;
    //     }
    //     cout<<endl;
    //     i++;

    // }

    int l = 4;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        if(l>1)
        {
          for(int k=1;k<=l;k++)
        {
            cout<<'*';
        }
        } 
        l=l/2;
        for(int l=i;l>=1;l--)
        {
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}