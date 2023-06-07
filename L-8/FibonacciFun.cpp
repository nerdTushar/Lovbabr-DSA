#include <iostream>
using namespace std;

int fibo(int n){
    int a=0,b=1,sum=0,s=0;
    for(int i=3;i<=n;i++){
       sum = (a+b);
       a=b;
       b=sum;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    
    int ans = fibo(n);
    cout<<ans<<endl;

    return 0;
}