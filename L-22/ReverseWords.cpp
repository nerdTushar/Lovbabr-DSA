#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<string> &v){
    int i = 0;
    int j = v.size()-1;
    while(i<j){
        swap(v[i++],v[j--]);
    }
}

void reverseWords(string s){
    vector<string> v;
    int i = 0, n = s.size();
    while(i<n){
        while(i<n && s[i] == ' '){
        i++;
       }
       int j = i+1;
       while(j<n && s[j] != ' '){
        j++;
       }
       v.push_back(s.substr(i,j-i));
       i = j+1;
    }

    reverseString(v);

    for(auto i : v){
        cout<<i<<" ";
    }
}

int main(){
    string s = "the sky is blue";

    reverseWords(s);
    return 0;
}