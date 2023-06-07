#include <iostream>
using namespace std;

int main(){
    int n,count=0;
    bool bl=1;
    cout<<"Enter a no. : ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            count++;
            bl=0;
            break;
        }
    }
    if(bl == 1){
        cout<<n<<" is a prime no."<<endl;
    }else{
        cout<<n<<" is not a prime no."<<endl;
    }
    return 0;
}