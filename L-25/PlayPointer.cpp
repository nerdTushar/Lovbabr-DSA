#include <iostream>
using namespace std;

int main(){
    // pointer to int is created, pointing to some garbage value
    // int *p; -> bad practise
    // cout<<*p<<endl;

    // int i = 5;
    // int *q = &i;
    // cout<<q<<endl;
    // cout<<*q<<endl;

    // int *p = 0;
    // p = &i;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    int n = 6;
    int b = n;
    cout<<"b before : "<<n<<endl;
    b++;
    cout<<"b after : "<<n<<endl;

    int num = 5;
    int *p = &num;
    int a = *p;
    cout<<"a before : "<<num<<endl;
    a++;
    cout<<"a after : "<<num<<endl;

    int *q = &num;
    cout<<"before : "<<num<<endl;
    (*q)++;
    cout<<"after : "<<num<<endl;

    // copying a pointer
    int *r = q;
    cout<<q<<" - "<<r<<endl;
    cout<<*q<<" - "<<*r<<endl;

    // important concept
    int i=3;
    int *t = &i;
    // cout<<(*t)++<<endl;
    *t = *t + 1;
    cout<<*t<<endl;
    cout<<"before t : "<<t<<endl;
    t = t+1;
    cout<<"after t : "<<t<<endl;

    double d = 4.3;
    double *g = &d;
    cout<<"before g : "<<g<<endl;
    g = g + 1;
    cout<<"after g : "<<g<<endl;
    cout<<"size of g : "<<sizeof(g)<<endl;
    return 0;
}