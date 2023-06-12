#include <iostream>
using namespace std;

void update(int arr[],int size){
    arr[0] = 120;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[3] = {2,4,3};
    int size = 3;
    update(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}