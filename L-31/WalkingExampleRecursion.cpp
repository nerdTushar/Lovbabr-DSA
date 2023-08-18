#include <iostream>
using namespace std;

void reachHome(int src,int dest){

    cout<<"Source : "<<src<<" Destination : "<<dest<<endl;

    // base case
    if(src == dest){
        cout<< "Pauch gya"<<endl;
        return ;
    }

    // processing - ek step aage bhadjao
    src++;

    // recursive call
    reachHome(src,dest);
}

int main(){
    int dest = 10;
    int src = 1;
    
    reachHome(src,dest);
    return 0;
}