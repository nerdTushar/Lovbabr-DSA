#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> matrix,int target){
    int rows = matrix.size();
    int cols = matrix[0].size();
    int rowIndex = 0;
    int colIndex = cols-1;
    while(rowIndex < rows && colIndex >= 0){
        int element = matrix[rowIndex][colIndex];
        if(element == target){
             return 1;
        }
        else if(element < target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return 0;
}

int main(){
    vector<vector<int>> matrix = {{1,4,7,11,15},
                                  {2,5,8,12,19},
                                  {3,6,9,16,22},
                                  {10,13,14,17,24},
                                  {18,21,23,26,30}};
    int target = 10;
    
    bool ans = searchMatrix(matrix,target);
    cout<<ans<<endl;
    return 0;
}