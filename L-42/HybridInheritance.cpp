#include <iostream>
using namespace std;

// Hybrid Inheritance
class A {
    public:
      void fun1(){
        cout<<"function 1"<<endl;
      }
};

class B : public A {
    public:
      void fun2(){
        cout<<"function 2"<<endl;
      }
};

class D {
    public:
      void fun4(){
        cout<<"function 4"<<endl;
      }
};

class C : public A, public D {
    public:
      void fun3(){
        cout<<"function 3"<<endl;
      }
};

int main(){
    A a;
    a.fun1();

    B b;
    b.fun1();
    b.fun2();

    C c;
    c.fun1();
    c.fun3();
    c.fun4();

    D d;
    d.fun4();
    return 0;
}