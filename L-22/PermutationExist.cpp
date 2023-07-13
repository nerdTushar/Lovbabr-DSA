#include <iostream>
using namespace std;

bool checkEqual(int a[],int b[]){
    for(int i=0;i<26;i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}

bool permutationExist(string s1,string s2){
    int count1[26] = {0}; 
    for(int i=0;i<s1.size();i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }
    int i=0;
    int count2[26] = {0};
    while(i<s1.size() && i<s2.size()){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if(checkEqual(count1,count2)){
        return 1;
    }
    while(i<s2.size()){
        int index = s2[i] - 'a';
        count2[index]++;
        index = s2[i-s1.size()] - 'a';
        count2[index]--;
        if(checkEqual(count1,count2)){
            return 1;
        }
        i++;
    }
    return 0;
}

int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";

    bool ans = permutationExist(s1,s2);
    cout<<ans<<endl;
    return 0;
}