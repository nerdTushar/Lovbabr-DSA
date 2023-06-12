#include <iostream>
using namespace std;

int getMax(int arr[],int size){
    int maxi = INT32_MIN;
    for(int i=0;i<size;i++){
        maxi = max(arr[i],maxi);
        // if(maxi<arr[i]){
        //     maxi = arr[i];
        // }
    }
    return maxi;
}

int getMin(int arr[],int size){
    int mini  = INT32_MAX;
    for(int i=0;i<size;i++){
        mini = min(arr[i],mini);
        // if(mini>arr[i]){
        //     mini=arr[i];
        // }
    }
    return mini;
}

int main(){
    int size;
    cin>>size;

    int arr[100];

    // taking input in array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Maximum : "<<getMax(arr,size)<<endl;
    cout<<"Minimum : "<<getMin(arr,size)<<endl;

    return 0;
}