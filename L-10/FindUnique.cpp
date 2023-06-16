#include <iostream>
using namespace std;

int findUnique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans ^= arr[i];
    }
    return ans;
}

int main(){
    int arr[5] = {1,3,4,1,3};

    int ans = findUnique(arr,5);
    cout<<"Unique no. : "<<ans<<endl;
    return 0;
}