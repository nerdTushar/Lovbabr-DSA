#include <iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<num<<endl;

    // address of operator - &
    cout<<&num<<endl;

    int *ptr = &num;
    cout<<"Address is : "<<ptr<<endl;
    cout<<"Value is : "<<*ptr<<endl;

    char c = 'a';
    char *p1 = &c;
    cout<<"Address is : "<<p1<<endl;
    cout<<"Value is : "<<*p1<<endl;

    double d = 4.3;
    double *p2 = &d;
    cout<<"Address is : "<<p2<<endl;
    cout<<"Value is : "<<*p2<<endl;

    cout<<"Size of num : "<<sizeof(num)<<endl;
    cout<<"Size of ptr : "<<sizeof(ptr)<<endl;
    cout<<"Size of c : "<<sizeof(c)<<endl;
    cout<<"Size of p1 : "<<sizeof(p1)<<endl;
    cout<<"Size of d : "<<sizeof(d)<<endl;
    cout<<"Size of p2 : "<<sizeof(p2)<<endl;
    return 0;
}