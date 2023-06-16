/*     
          *
        * * *
      * * * * *    
    * * * * * * *
*/

#include <iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n-i){
    //         cout<<" "<<" ";
    //         j++;
    //     }
    //     int k=1;
    //     while(k<=i){
    //         cout<<"*"<<" ";
    //         k++;
    //     }
    //     int l=1;
    //     while(l<i){
    //         cout<<"*"<<" ";
    //         l++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    for(int i=1;i<=4;i++)
    {
        for(int s=4;s>i;s--)
        {
            cout<<"  ";
        }
        for(int j=1;j<i+i;j++)
        {
            cout<<" *";
        }
        cout<<"\n";
    }
    return 0;
}