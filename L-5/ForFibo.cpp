#include <iostream>
using namespace std;

int main(){
    int n,a=0,b=1,sum=0;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        sum = a + b;
        cout<<sum<<" ";
        a = b;
        b = sum;

    }
    return 0;
}