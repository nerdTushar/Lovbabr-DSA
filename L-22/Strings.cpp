#include <iostream>
using namespace std;

char toLowerString(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else if(ch >= '0' && ch <= '9'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char name[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if((name[j] >= 'a' && name[j] <= 'z') || (name[j] >= 'A' && name[j] <= 'Z') || (name[j] >= '0' && name[j] <= '9')){
            swap(name[i],name[j]);
           i++;
        }
    }
    int s=0,e=i-1;
    while(s<e){
        if(toLowerString(name[s])!=toLowerString(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverseString(char name[],int n){
    int s=0,e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLength(char name[]){
    int c = 0;
    for(int i=0;name[i]!='\0';i++){
        c++;
    }
    return c;
}

int main(){

    char name[50];

    cout<<"Enter your name : ";
    cin>>name;

    cout<<"Your name is "<<name<<endl;

    int len = getLength(name);
    cout<<"Length : "<<len<<endl;
    
    reverseString(name,len);
    cout<<"Reverse string : "<<name<<endl;

    cout<<"Palindrome or not : "<<checkPalindrome(name,len)<<endl;
    return 0;
}