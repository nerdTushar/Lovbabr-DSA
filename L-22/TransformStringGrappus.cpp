#include <iostream>
using namespace std;

char toUpper(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return ch;
    }
    else{
        return ch - 'a' + 'A';
    }
}

string transformString(string &str1,string &str2){
    for(int i=0;i<str1.size();i++){
        if(str1[i] >= 'a' && str1[i] <= 'z'){
            str1[i] = toUpper(str1[i]);
        }
    }
    if(str1.size() != 0 && str1.find(str2) < str1.size()){
        str1.clear();
        str1 = str2;
        return "Yes";
    }
    return "No";
}

int main(){
    string str1 = "daBcd";
    string str2 = "ABC";

    string ans = transformString(str1 , str2);
    cout<<ans<<endl;
    return 0;
}