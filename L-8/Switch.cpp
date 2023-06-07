#include <iostream>
using namespace std;

int main(){
    int num = 1;
    char ch ='1';
    switch(2*num){
        case 2 : cout<<"First"<<endl;
                 cout<<"First Again"<<endl;
                 break;
        case '1' : switch(num){
                       case 1 : cout<<"Second"<<endl;
                                break;
                   }
                   break;
        default : cout<<"It's a default case"<<endl;
    }
    return 0;
}