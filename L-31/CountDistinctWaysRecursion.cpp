#include <iostream>
using namespace std;

int countDistinctWays(int nStairs){
    // base case
    if(nStairs < 0){
        return 0;
    }
    if(nStairs == 0){
        return 1;
    }

    // recursive relation
    return countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
}

int main(){
    int nStairs = 3;

    int ans = countDistinctWays(nStairs);
    cout<< ans <<endl;
    return 0;
}