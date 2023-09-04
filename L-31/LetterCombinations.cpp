#include <iostream>
#include <vector>
using namespace std;

void solve(string digits,string output,int index,vector<string> & ans,string* mapping){
    // base case
    if(index >= digits.size()){
        ans.push_back(output);
        return;
    }
     
    int digit = digits[index] - '0';
    string temp = mapping[digit];
    for(int i=0;i<temp.size();i++){
        char element = temp[i];
        output.push_back(element);
        solve(digits,output,index+1,ans,mapping);
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits){
    vector<string> ans;
    string output = "";
    int index = 0;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,index,ans,mapping);
    return ans;
}

int main(){
    string digits = "23";

    vector<string> ans = letterCombinations(digits);

    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}