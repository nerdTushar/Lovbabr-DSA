#include <iostream>
using namespace std;

int main(){

    // pow(a,b)

    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
       ans = ans * a;
    }
    cout<<ans<<endl;

    int c,d;
    cin>>c>>d;
    ans=1;
    for(int i=1;i<=d;i++){
       ans = ans * c;
    }
    cout<<ans<<endl;

    int e,f;
    cin>>e>>f;
    ans=1;
    for(int i=1;i<=f;i++){
       ans = ans * e;
    }
    cout<<ans<<endl;

    return 0;
}