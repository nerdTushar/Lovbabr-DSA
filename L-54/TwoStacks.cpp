#include <bits/stdc++.h> 
using namespace std;

class TwoStack {
    int *arr;
    int top1;
    int top2;
    int size;

public:

    // Initialize TwoStack.
    TwoStack(int s) {
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        // atleast an empty space present
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }else{
            cout<<"Stack OverFlow"<<endl;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        // atleast an empty space present
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }else{
            cout<<"Stack OverFlow"<<endl;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }else{
            return -1;
        }
    }
};

int main(){
    TwoStack st(5);

    st.push1(1);
    st.push1(2);
    st.push1(3);
    st.push2(4);
    st.push2(5);
    st.push1(10);
    cout<<st.pop1()<<endl;
    cout<<st.pop2()<<endl;
    cout<<st.pop1()<<endl;
    cout<<st.pop2()<<endl;
    return 0;
}