#include <iostream>
using namespace std;

void print(int* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool linearSearch(int* arr,int size,int key){

    print(arr,size);

    // base case
    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }else{
        return linearSearch(arr+1,size-1,key);
    }

}

int main(){
    int arr[] = {3,5,1,2,6};
    int size = 5;
    int key = 2;

    bool ans = linearSearch(arr,size,key);
    if(ans){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}