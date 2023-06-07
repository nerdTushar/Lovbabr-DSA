#include <iostream>
using namespace std;

bool isEven(int num){
    // odd
    if(num&1){
        return 0;
    }else{ // even
        return 1;
    }
}

int main(){
    int num;
    cin>>num;

    if(isEven(num)){
        cout<<"It is an even no."<<endl;
    }else{
        cout<<"It is an odd no."<<endl;
    }

    return 0;
}