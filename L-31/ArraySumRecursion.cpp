#include <iostream>
using namespace std;

int getSum(int* arr,int size){
    
    int sum = 0;

    // base case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    
    sum += arr[0] + getSum(arr+1,size-1);
    return sum;
    
}

int main(){
    int arr[] = {3,2,1,5,6};
    int size = 5;

    int ans = getSum(arr,size);
    cout<<"Sum : "<<ans<<endl;
    return 0;
}