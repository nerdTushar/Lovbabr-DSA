#include <iostream>
#include <vector>
using namespace std;

// bool isPrime(int num){
//     for(int i=2;i<num;i++){
//         if(num%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int countPrimes(int n){
//     int count = 0;
//     for(int i=2;i<n;i++){
//         if(isPrime(i)){
//             count++;
//         }
//     }
//     return count;
// }

// Sieve of Eratosthenes algorithm

int countPrimes(int n){
    int count = 0;
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
            cout<<i<<" ";
            for(int j=i*2;j<n;j=j+i){
                prime[j]=false;
            }
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;

    int ans = countPrimes(n);
    cout<<endl<<ans;
    return 0;
}