#include <iostream>
using namespace std;

void insertionSort(int* arr,int n,int i=1){
    // base case
    if(i == n){
        return ;
    }

    int j=i-1;
    int temp = arr[i];
    for(;j>=0;j--){
       if(arr[j] > temp){
         arr[j+1] = arr[j];
       }else{
        break;
       }
    }
    arr[j+1] = temp;

    insertionSort(arr,n,++i);
}

int main(){
    int arr[5] = {2,15,1,6,9};

    insertionSort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}