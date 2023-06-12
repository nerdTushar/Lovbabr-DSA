#include <iostream>
using namespace std;

void printArray(int arr[],int size){
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}

int main(){
    // declare
    int number[15];

    // accessing an array
    cout<<"Value at 14 index : "<<number[14]<<endl;

    // cout<<"Value at 20 index : "<<number[20]<<endl;

    // initializing an array
    int second[3] = {5,7,11};
    // accessing an element
    cout<<"Value at 2 index : "<<second[2]<<endl;

    int third[15]={2,7};
    int n=15;
    // printing an array
    printArray(third,n);
    int thirdsize = sizeof(third)/sizeof(int);
    cout<<"size of third : "<<thirdsize<<endl;
    // initializing all locations with 0
    int forth[10]={0};
    n=10;
    // printing an array
    printArray(forth,n);
    
    int fifth[10]={1};
    n=10;
    // printing an array
    printArray(fifth,n);

    int fifthsize = sizeof(fifth)/sizeof(int);
    cout<<"size of fifth : "<<fifthsize<<endl;

    char ch[5] = {'a','b','c','r','p'};
    cout<<ch[3]<<endl;
    // printArray(ch,5);
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;
    
    double firstdouble[6];
    float firstfloat[7];
    bool firstbool[8];
    return 0;
}