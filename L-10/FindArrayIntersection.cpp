#include <iostream>
using namespace std;

void arrayIntersection(int arr1[],int n,int arr2[],int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int arr1[6] = {1,2,2,2,3,4};
    int arr2[4] = {2,2,3,3};

    arrayIntersection(arr1,6,arr2,4);
    return 0;
}