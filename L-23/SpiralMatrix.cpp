#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> matrix){
     int row = matrix.size();
     int col = matrix[0].size();
     int count = 0;
     int total = row*col;
     vector<int> ans;

     int startingRow = 0;
     int endingRow = row-1;
     int startingCol = 0;
     int endingCol = col-1;

     while(count<total){
        for(int index=startingCol;index<=endingCol && count<total;index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        for(int index=startingRow;index<=endingRow && count<total;index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;
        for(int index=endingCol;index>=startingCol && count<total;index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
        for(int index=endingRow;index>=startingRow && count<total;index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
     }
     return ans;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3,4},
                                  {5,6,7,8},
                                  {9,10,11,12}};

    vector<int> ans = spiralOrder(matrix);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}