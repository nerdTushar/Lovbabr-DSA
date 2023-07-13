#include <iostream>
using namespace std;

void removeOccurences(string &s,string part){
    while(s.size() != 0 && s.find(part) < s.size()){
        s.erase(s.find(part),part.size());
    }
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";

    removeOccurences(s,part);
    cout<<s<<endl;
    return 0;
}