#include <iostream>
#include <algorithm>
using namespace std;

string reverseStr(string s){
    reverse(s.begin(),s.end());
    return s;
}

string reverseString(string s, int k){
    int i = 0, j = 0;
    bool x = true;
    int n = s.size();
    string ans = "";
    while(i<n){
        while(j<i+k){
            j++;
        }
        if(x){
            ans = ans + reverseStr(s.substr(i,j-i));
            x = false;
        }
        else{
            ans = ans + s.substr(i,j-i);
            x = true;
        }
        i=j;
    }
    return ans;
}

int main(){
    string s = "abcdefg";
    int k = 2;

    string ans = reverseString(s,k);
    cout<<ans;
    return 0;
}