#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int> &v,int k){
    vector<int> temp(v.size());
    for(int i=0;i<v.size();i++){
        temp[(i+k)%v.size()] = v[i];
    }
    v=temp;
}

int main(){
    vector<int> v = {1,7,9,11};
    int k=2;

    rotateArray(v,k);

    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}