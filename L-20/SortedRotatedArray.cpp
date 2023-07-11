#include <iostream>
#include <vector>
using namespace std;

bool sortedRotatedArray(vector<int> &v){
    int c = 0;
    int n = v.size();
    for(int i=1;i<v.size();i++){
        if(v[i-1]>v[i]){
            c++;
        }
    }
    if(v[n-1]>v[0]){
        c++;
    }
    return c<=1;
}

int main(){
    vector<int> v={3,4,5,1,2};
    
    bool ans = sortedRotatedArray(v);
    cout<<ans<<endl;
    return 0;
}