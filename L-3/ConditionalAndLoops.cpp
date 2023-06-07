#include <iostream>
using namespace std;

int main(){
/*
    int a;
    cin >> a;
    cout << "Value of a : " << a << endl;

    if(a>0){
        cout << "a is positive" << endl;
    }
    else{
        cout << "a is not positive" << endl;
    }  


    int c,d;
    // c = cin.get();
    // cout << c << endl;
    cin >> c >> d;
    cout << "Value of c and d : " << c << " " << d << endl;
    if(c>d){
        cout << "c is greater" << endl;
    }
    if(d>c){
        cout << "d is greater" << endl;
    }

    
    int a;
    cout << "Enter value of a : ";
    cin >> a;
    if(a>0){
        cout << "a is positive" << endl;
    }
    else{
        if(a<0){
            cout << "a is negative" << endl;
        }
        else{
            cout << "a is 0" << endl;
        }
    }

    int a;
    cout << "Enter value of a : ";
    cin >> a;
    if(a>0){
        cout << "a is positive" << endl;
    }
    else if(a<0){
        cout << "a is negative" << endl;
    }
    else{
        cout << "a is 0" << endl;
    }
*/
    char ch;
    cout << "Enter value of ch : ";
    cin >> ch;
    if(ch >= 'a' && ch <= 'z'){
        cout << "This is lowercase" << endl;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout << "This is uppercase" << endl;
    }
    else{
        cout << "This is numeric" << endl;
    }
    return 0;
}