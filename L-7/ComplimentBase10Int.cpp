// n=5 -> 101 -> compliment -> 010 -> 2 (answer)

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m=n;
    int mask=0;
    if(n==0){
        cout<<"1"<<endl;
    }else{
       while(m!=0){
        mask = (mask<<1) | 1;
        m>>=1;
    }
    int ans = (~n & mask);
    cout<<ans<<endl;
    }
    return 0;
}