#include <iostream>
using namespace std;

int modularExponentiation(int x,int n,int m){
    int res = 1;
    while(n>0){
        if(n&1){
            res = (1LL * res%m * x%m)%m;
        }
        x = (1LL * x%m * x%m)%m;
        n>>=1;
    }
    return res;
}

int main(){
    int x=3,n=1,m=2;

    int ans = modularExponentiation(x,n,m);
    cout<<ans<<endl;
    return 0;
}