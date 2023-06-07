#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int answer=1;
    // for(int i=0;i<=30;i++){
    //     ans = pow(2,i);
    //     if(ans == n){
    //         cout<<"true"<<endl;
    //     }
    // }
    for(int i=0;i<=30;i++){
        if(answer == n){
            cout<<"true"<<endl;
            ans=1;
        }
        if(answer < INT32_MAX/2)
        answer *= 2;
    }
    if(ans == 0)
    cout<<"false"<<endl;
    return 0;
}