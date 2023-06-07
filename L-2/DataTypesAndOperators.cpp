#include <iostream>
using namespace std;

int main(){
    int a = 123;
    cout << a << endl;

    char b = 'v';
    cout << b << endl;

    bool bl = true;
    cout << bl << endl;

    float f = 1.2;
    cout << f << endl;

    double d = 1.23;
    cout << d << endl;

    cout << "size of a : " << sizeof(a) << endl;
    cout << "size of b : " << sizeof(b) << endl;
    cout << "size of bl : " << sizeof(bl) << endl;
    cout << "size of f : " << sizeof(f) << endl;
    cout << "size of d : " << sizeof(d) << endl;

    int t = 'a';           // type casting
    cout << t << endl;

    char c = 98;
    cout << c << endl;

    // char ch1 = 123456;
    // cout << ch1 << endl;

    unsigned int u = 112;
    cout << u << endl;

    unsigned int p = -112;
    cout << p << endl;

    int x = 2/5;
    cout << x << endl;

    int z = 2.0/5;
    cout << z << endl;

    cout << 2.0/5 << endl;

    int m = 2;
    int n = 3;

    bool first = (m==n);
    cout << first << endl;
    bool second = (m<n);
    cout << second << endl;
    bool third = (m>n);
    cout << third << endl;
    bool forth = (m<=n);
    cout << forth << endl;
    bool fifth = (m>=n);
    cout << fifth << endl;
    bool sixth = (m!=n);
    cout << sixth << endl;
    return 0;
}