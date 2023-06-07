#include <iostream>
using namespace std;

int countSetBits(int a,int b){
    int counta=0;
    int countb=0;
    for(;a!=0 || b!=0; a>>=1,b>>=1){
        int bita = a&1;
        int bitb = b&1;
        if(bita==1){
            counta++;
        }
        if(bitb==1){
            countb++;
        }
    }
    int ans = counta+countb;
    return ans;
}

int main(){
    int a,b;
    cin>>a>>b;

    int ans = countSetBits(a,b);
    cout<<ans<<endl;

    return 0;
}