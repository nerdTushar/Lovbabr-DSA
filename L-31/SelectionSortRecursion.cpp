#include <iostream>
using namespace std;

void selectionSort(int* arr,int n,int i=0){
    // base case
    if(n==0 || n==1){
        return ;
    }

    int minIndex = i;
    for(int j=i+1;j<n;j++){
        if(arr[j] < arr[minIndex]){
            minIndex = j;
        }
    }
    swap(arr[minIndex],arr[i]);

    selectionSort(arr,n-1,++i);
}

int main(){
    int arr[5] = {2,3,1,5,9};

    selectionSort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}