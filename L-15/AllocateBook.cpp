#include <iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
    int studentCount=1;
    int pagesSum=0;
    for(int i=0;i<n;i++){
        if(pagesSum + arr[i] <= mid){
            pagesSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pagesSum=arr[i];
        }
    }
    return true;
}

int main(){
    int arr[4]={10,20,30,40}; // no of pages
    int m=2; // no of students
    int s=0,sum=0,mid=0;
    if(m>4){
        return -1;
    }
    for(int i=0;i<4;i++){
        sum += arr[i];
    }
    int e=sum;
    int ans = -1;
    while(s<=e){
        mid=s + (e-s)/2;
        if(isPossible(arr,4,m,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}