#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int s=0,e=size-1,mid=0;
    while(s<=e){
        mid=s + (e-s)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int index1 = BinarySearch(even,6,12);
    cout<<"Index1 : "<<index1<<endl;
    int index2 = BinarySearch(odd,5,8);
    cout<<"Index2 : "<<index2<<endl;
    return 0;
}