#include <iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s=0,e=n-1,mid=0;
    while(s<e){
        mid=s + (e-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
    }
    return s;
}

int main(){
    int arr[5] = {3,8,10,17,1};
    cout<<"Pivot is : "<<getPivot(arr,5)<<endl;
    return 0;
}