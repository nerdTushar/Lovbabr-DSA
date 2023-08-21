#include <iostream>
using namespace std;

void print(int* arr,int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int* arr,int s,int e,int key){

    print(arr,s,e);

    // base case
    if(s>e){
        return false;
    }

    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        return true;
    }else if(arr[mid] < key){
        return binarySearch(arr,mid+1,e,key);
    }else{
        return binarySearch(arr,s,mid-1,key);
    }
}

int main(){
    int arr[] = {2,4,6,10,14,18};
    int size = 6;
    int key = 18;
    int s = 0;
    int e = size-1;

    bool ans = binarySearch(arr,s,e,key);
    if(ans){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}