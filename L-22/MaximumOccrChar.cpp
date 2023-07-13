#include <iostream>
using namespace std;

char getMaxOccrChar(string s){
    int arr[26] = {0};
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a' + ans;
    return finalans;
}

int main(){
    string s = "testsample";

    char ans = getMaxOccrChar(s);
    cout<<ans<<endl;
    return 0;
}