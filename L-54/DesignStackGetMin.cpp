#include <iostream>
#include <stack>
#include <limits.h>
using namespace std;

class SpecialStack {
    
    stack<int> s;
    int mini = INT_MAX;

    public:
        
    void push(int data) {
        // for first element
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        else{
            if(data < mini){
               s.push(2*data - mini);
               mini = data;
            }else{
                s.push(data);
            }
        }
    }

    void pop() {
        // if(s.empty()){
        //     return -1;
        // }

        int curr = s.top();
        s.pop();
        if(curr > mini){
            // return curr;
        }else{
            int prevMini = mini;
            mini = 2*mini - curr;
            // return prevMini;
        }
    }

    int top() {
        if(s.empty())
          return -1;

        int curr = s.top();
        if(curr < mini){
            return mini;
        }else{
            return curr;
        }
    }

    int getMin() {
        if(s.empty())
          return -1;

        return mini;
    }  
};

int main(){
    SpecialStack st;
    st.push(13);
    st.push(47);
    cout<<st.top()<<endl;
    st.push(8);
    st.pop();
    cout<<st.getMin()<<endl;
    return 0;
}