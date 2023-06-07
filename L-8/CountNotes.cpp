#include <iostream>
using namespace std;

int main(){
    int amount;
    cin>>amount;
    int hundred=100;
    int fifty=50;
    int twenty=20;
    int one=1;
    int note=0;
    while(amount!=0){
        switch((amount/hundred) && 1)
        {
            case 1: note= amount/hundred;
                    cout<<note<<" Notes : 100 Rupees"<<endl;
                    amount=amount-(note*hundred);
                    break;
            case 0: switch((amount/fifty) && 1)
                    {
                        case 1: note= amount/fifty;
                                cout<<note<<" Notes : 50 Rupees"<<endl;
                                amount=amount-(note*fifty);
                                break;
                        case 0: switch((amount/twenty) && 1)
                                {
                                    case 1: note= amount/twenty;
                                            cout<<note<<" Notes : 20 Rupees"<<endl;
                                            amount=amount-(note*twenty);
                                            break;
                                    case 0: switch((amount/one) && 1)
                                            {
                                                case 1: note= amount/one;
                                                        cout<<note<<" Notes : 1 Rupees"<<endl;
                                                        amount=amount-(note*one);
                                                        break;
                                                case 0: cout<<"Invalid Notes"<<endl;
                                                        break;
                                            }
                                            break;
                                }
                                break;
                    }
                    break;
        }
        
        

    }
    return 0;
}