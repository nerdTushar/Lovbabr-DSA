#include <iostream>
using namespace std;

int& func(int a){  // bad practice
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n){  // bad practice
    int* p = &n;
    return p;
}

void update1(int& n){
    n++;
}

void update(int n){
    n++;
}

int main(){
    // int i = 5;

    // create a ref. variable

    // int& j = i;

    // cout<< i <<endl;
    // i++;
    // cout<< i <<endl;
    // j++;
    // cout<< i <<endl;
    // cout<< j <<endl;

    int n = 5;
    cout<<"Before : "<<n<<endl;
    update1(n);
    cout<<"After : "<<n<<endl;

    cout<<func(n)<<endl;
    int* ans = fun(n);
    cout<< *ans <<endl;
    return 0;
}