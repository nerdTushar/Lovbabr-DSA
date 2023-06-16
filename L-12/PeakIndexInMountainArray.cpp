#include <iostream>
using namespace std;

int peakIndex(int arr[],int n){
    int s=0,e=n-1,mid=0;
    while(s<e){
        mid=s + (e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }else{
            e=mid;
        }
    }
    return s;
}

int main(){
    int arr[4]={3,4,5,1};

    int peak = peakIndex(arr,4);
    cout<<"Peak Index In Mountain Array : "<<peak<<endl;
    return 0;
}