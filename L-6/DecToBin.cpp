#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,ans=0,i=0,answer=0,j=0,rev=0;
    cin>>n;
    int c=n;
    int d=n;

    // Decimal Representation
    
    while(n!=0){
        int digit=n%10;
        ans = ans + (digit*pow(10,i));
        i++;
        n/=10;
    }

    // Binary Representation

    while(c!=0){
        int bit = c%2;
        answer = answer + (bit*pow(10,j));
        j++;
        c/=2;
    }
    // while(c!=0){
    //     int bit = (c&1);
    //     answer = answer + (pow(10,j)*bit);
    //     c>>=1;
    //     j++;
    // }

    // Reverse

    while(d!=0){
        int digit = d%10;
        rev = (rev*10) + digit;
        d/=10;
    }
    cout<<ans<<endl;
    cout<<answer<<endl;
    cout<<rev<<endl;
   return 0;
}