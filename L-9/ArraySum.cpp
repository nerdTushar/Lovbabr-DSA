#include <iostream>
using namespace std;

int arraySum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
       sum+=arr[i];
    }
    return sum;
}

int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sum = arraySum(arr,size);
    cout<<"Array Sum : "<<sum<<endl;
    return 0;
}