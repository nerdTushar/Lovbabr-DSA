#include <iostream>
using namespace std;

bool validChar(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        return true;
    }
    return false;
}

string reverseString(string s){
    int i = 0, j = s.size() - 1;
    while(i<j){
        if(validChar(s[i]) && validChar(s[j])){
          swap( s[i++] , s[j--] );
        }
        if(validChar(s[i]) == false){
            i++;
        }
        if(validChar(s[j]) == false){
            j--;
        }
    }
    return s;
}

int main(){
    string s = "a-bC-dEf-ghIj";

    string ans = reverseString(s);
    cout<<ans<<endl;
    return 0;
}