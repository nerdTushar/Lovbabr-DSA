#include <iostream>
using namespace std;

bool isPresent(int arr[][3],int target,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

void printRowSum(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
           sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

void printColSum(int arr[][3],int row,int col){
    for(int j=0;j<col;j++){
        int sum = 0;
        for(int i=0;i<row;i++){
           sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

void largestRowSum(int arr[][3],int row,int col){
    int maxi=-1,ind=0;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        if(maxi < sum){
            maxi = sum;
            ind=i;
        }
    }
    cout<<"Row of Maximum Sum : "<<ind<<" : "<<maxi<<endl;
}

int main(){
    int arr[3][3];
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    // int arr[3][3] = {{1,11,111},{2,22,222},{3,33,333}};

    // taking input row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    // taking input col wise
    // for(int j=0;j<3;j++){
    //     for(int i=0;i<3;i++){
    //         cin>>arr[i][j];
    //     }
    // }

    // print
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter the element to search : ";
    int target;
    cin>>target;

    if(isPresent(arr,target,3,3)){
        cout<<"Element found"<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }

    printRowSum(arr,3,3);

    printColSum(arr,3,3);

    largestRowSum(arr,3,3);

    return 0;
}