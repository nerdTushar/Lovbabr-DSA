#include <iostream>
using namespace std;

int factorial(int num){
    int ans=1;
    for(int i=2;i<=num;i++){
        ans*=i;
    }
    return ans;
}

int nCr(int n,int r){
      int ans = (factorial(n)/(factorial(r)*factorial(n-r)));
      return ans;
}

int main(){
    int n,r;
    cin>>n>>r;

    cout<<nCr(n,r)<<endl;

    return 0;
}