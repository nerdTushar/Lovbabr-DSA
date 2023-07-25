#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void rotateMatrix(vector<vector<int>> &matrix){
    int n = matrix.size();
    for(int row=0;row<n;row++){
        for(int col=0;col<row;col++){
            swap(matrix[row][col],matrix[col][row]);
        }
    }

    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
    for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},
                                  {4,5,6},
                                  {7,8,9}};
    
    rotateMatrix(matrix);
    return 0;
}