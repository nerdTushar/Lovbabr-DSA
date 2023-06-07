#include <iostream>
using namespace std;

int main(){
    uint32_t n = 00000000000000000000000000001111;
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n>>=1;
    }
    cout<<count<<endl;
    return 0;
}