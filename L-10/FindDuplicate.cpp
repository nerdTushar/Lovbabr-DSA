#include <iostream>
using namespace std;

int findDuplicate(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
       ans ^= arr[i];
    }
    for(int i=1;i<n;i++){
        ans ^= i;
    }
    return ans;
}

int main(){
    int arr[5] = {1,2,3,4,2};
    int ans = findDuplicate(arr,5);
    cout<<"Duplicate no. : "<<ans<<endl;
    return 0;
}