#include <iostream>
#include <vector>
using namespace std;
int compressString(vector<char> &chars){
    int i=0;
    int ansIndex=0;
    int n=chars.size();
    while(i<n){
        int j=i+1;
        while(j<n && chars[i] == chars[j]){
            j++;
        }
        chars[ansIndex++] = chars[i];
        int count = j-i;
        if(count > 1){
            string s=to_string(count);
            for(auto ch:s){
               chars[ansIndex++] = ch;
            }
        }
        i=j;
    }
    return ansIndex;
}

int main(){
    vector<char> chars = {'a','a','a','b','b','c','c','c'};

    int ans = compressString(chars);
    for(auto i : chars){
        cout<<i;
    }
    cout<<endl;
    cout<<ans;
    return 0;
}