#include <iostream>
#include <stack>
using namespace std;

bool isValidParenthesis(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        char ch = s[i];
        // if opening bracket, stack push
        // if close bracket,stacktop check and pop

        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }else{
            // for closing bracket
            if(!st.empty()){
                char top = st.top();
                if((top == '{' && ch == '}') || (top == '(' && ch == ')') || (top == '[' && ch == ']')){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }
    if(st.empty()){
        return true;
    }else{
        return false;
    }
}

int main(){
    string expression = "[()]{}{[()()]()}";

    bool ans = isValidParenthesis(expression);
    if(ans){
        cout<<"Balanced"<<endl;
    }else{
        cout<<"Not Balanced"<<endl;
    }
    return 0;
}