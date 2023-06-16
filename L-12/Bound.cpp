#include <iostream>
using namespace std;

int firstOccurence(int arr[],int n,int key){
    int ans=-1;
    int s=0,e=n-1,mid=0;
    while(s<=e){
        mid=s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

int lastOccurence(int arr[],int n,int key){
    int ans=-1;
    int s=0,e=n-1,mid=0;
    while(s<=e){
        mid=s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            s=mid+1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[5] = {1,3,3,3,5};
    int firstocc = firstOccurence(arr,5,3);
    int lastOcc = lastOccurence(arr,5,3);
    cout<<"First Occurence : "<<firstocc<<" "<<lastOcc<<endl;
    return 0;
}