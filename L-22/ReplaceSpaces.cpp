#include <iostream>
using namespace std;

// string replaceSpaces(string s){
//     int i=0;
//     int n=s.size();
//     string ans = "";
//     while(i<n){
//          while(i<n && s[i] == ' '){
//             ans = ans + "@40";
//             i++;
//          }
//          int j = i+1;
//          while(j<n && s[j] != ' '){
//             j++;
//          }
//          ans = ans + s.substr(i,j-i);
//          i=j;
//     }
//     return ans;
// }

// string replaceSpaces(string s){
//     string temp;
//     for(int i=0;i<s.size();i++){
//         if(s[i] == ' '){
//         temp.push_back('@');
//         temp.push_back('4');
//         temp.push_back('0');
//         }
//         else{
//             temp.push_back(s[i]);
//         }
//     }
//     return temp; 
// }

void replaceSpaces(string &s){    // in-place solution with O(1) space complexity
    int countSpace = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == ' ')
        countSpace++;
    }
    int len = s.size();
    int newLength = len + (countSpace*2);
    s.resize(newLength);
    int e=newLength-1;
    for(int st=len-1;st>=0;st--){
        if(s[st] == ' '){
            s[e] = '0';
            s[e-1] = '4';
            s[e-2] = '@';
            e=e-3;
        }
        else{
            s[e] = s[st];
            e=e-1;
        }
    }
}


int main(){
    string s = "Coding Ninjas Is A Coding Platform";
    replaceSpaces(s);
    cout<<s<<endl;
    return 0;
}