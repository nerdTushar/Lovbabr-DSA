#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &v){
    int s=0;
    int e=v.size()-1;
    while(s<e){
        swap(v[s++],v[e--]);
    }
}

vector<int> sumOfArrays(vector<int> &a, vector<int> &b){
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    vector<int> v;
    while(i>=0 && j>=0){
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum%10;
        v.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        v.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        v.push_back(sum);
        j--;
    }
    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        v.push_back(sum);
    }
    reverseArray(v);
    return v;
}

int main(){
    vector<int> a = {1,2,3};
    vector<int> b = {9,9};

    vector<int> ans = sumOfArrays(a,b);

    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}