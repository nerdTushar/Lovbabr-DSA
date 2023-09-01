#include <iostream>
using namespace std;

bool checkPalindrome(string str,int s,int e){
    // base case
    if(s>=e){
        return true;
    }

    if(str[s] != str[e]){
       return false;
    }else{
        return checkPalindrome(str,s+1,e-1);
    }
}

int main(){
    string str = "abbccbba";
    int s = 0;
    int e = str.size() - 1;
    bool ans = checkPalindrome(str,s,e);
    if(ans){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}