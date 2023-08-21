#include <iostream>
using namespace std;

void reverseString(string &str,int s,int e){
    // base case
    if(s>=e){
        return;
    }

    swap(str[s++],str[e--]);

    reverseString(str,s,e);
}

int main(){
    string str = "abcde";
    int s=0;
    int e=str.size()-1;
    
    reverseString(str,s,e);
    cout<<str<<endl;
    return 0;
}