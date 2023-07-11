#include <iostream>
using namespace std;

char toLower(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else if(ch >= '0' && ch <= '9'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool validCharacter(char ch){
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return 1;
    }
    return 0;
}

bool validPalindrome(string s){
      int i = 0;
      for(int j = 0;j<s.size();j++){
        if(validCharacter(s[j])){
            swap(s[i],s[j]);
            i++;
        }
      }

      int st = 0;
      int e = i-1;
      while(st<e){
        if( toLower(s[st]) != toLower(s[e]) ){
            return 0;
        }
        else{
            st++;
            e--;
        }
      }
      return 1;
}

int main(){
    string s = "@";

    cout<<validPalindrome(s)<<endl;
    return 0;
}