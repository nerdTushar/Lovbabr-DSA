#include <iostream>
using namespace std;

int main(){
/*
    int n,i=1;
    cin >> n;
    while (i<=n)
    {
        cout << i << " ";
        i++;
    }

    int n,i=1,sum=0;
    cin >> n;
    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    cout << "sum : " << sum << endl;

    int n,i=2,sum=0;
    cin>>n;
    while(i<=n){
        if(i%2==0){
            sum = sum + i;
        }
        i++;
    }
    cout << "sum of even numbers : " << sum << endl;

    int f=0;
    float c;
    while(f<=10){
        c = (f-32)/1.8;
        cout << "c :" << c << " " << "f :" << f << endl;
        f++;
    }
*/
    int num,i=2,count=0;
    cout << "Enter a no. : ";
    cin >> num;
    while(i<num){
        if(num%i==0){
            count++;
            break;
        }
        i++;
    }
    if(count==0){
        cout << num << " is a prime no." << endl;
    }
    else{
        cout << num << " is not a prime no." << endl;
    }
    return 0;
}