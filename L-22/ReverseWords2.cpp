#include <iostream>
#include <algorithm>
using namespace std;

string reverseString(string str){
    reverse(str.begin(),str.end());
    return str;
}

void reverseWords(string s){
    int i = 0, c = 0;
    int n = s.size();
    string ans;
    while(i<n){
        while(i<n && s[i] == ' '){
            i++;
        }
        int j = i+1;
        while(j<n && s[j] != ' '){
            j++;
        }
        if(c == 0){
        ans = reverseString(s.substr(i,j-i));
        c=1;
        }
        else if(s.substr(i,j-i) != "" && c){
           ans = ans + " " + reverseString(s.substr(i,j-i));
        }
        i = j+1;
    }
    cout<<ans;
}

int main(){
    string s = "Let's take LeetCode contest";

    reverseWords(s);
    return 0;
}