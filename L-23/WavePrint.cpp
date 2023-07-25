#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr,int row,int col){
    vector<int> ans;
    for(int j=0;j<col;j++){
        if(j&1){
            for(int i=row-1;i>=0;i--){
               ans.push_back(arr[i][j]);
            }
        }else{
            for(int i=0;i<row;i++){
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> arr = {{1,2,3,4},
                               {5,6,7,8},
                               {9,10,11,12}};

    vector<int> ans = wavePrint(arr,3,4);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}