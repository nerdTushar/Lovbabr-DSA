#include <iostream>
using namespace std;

long long int sqrtInteger(int n){
    long long int s=0,e=n,mid=0;
    long long int ans = -1;
    while(s<=e){
        mid=s + (e-s)/2;
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        else if(square < n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

double sqrt(int n,int precision,int temp){
    double factor=1,ans=0;
    for(int i=0;i<precision;i++){
        factor = factor/10;
        for(double j=temp;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int temp = sqrtInteger(n);
    cout<<sqrt(n,4,temp)<<endl;
    
    return 0;
}