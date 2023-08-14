#include <iostream>
using namespace std;

int score = 15;

void a(int& i){
    cout<<score<<"in a"<<endl;
    cout<< i <<endl;
    score++;
}

void b(int& i){
    cout<<score<<"in b"<<endl;
    cout<< i <<endl;
}

int main(){
    int i = 5;
    cout<<score<<"in main"<<endl;
    a(i);
    b(i);

    {
        int i = 10;
        cout<< i <<endl;
    }

    cout<< i <<endl;
    return 0;
}