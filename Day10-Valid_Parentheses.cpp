#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int size = s.size();
        for(int i = 0; i < size; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }

                int top = st.top();

                if((s[i] == ')' && top == '(') || 
                   (s[i] == '}' && top == '{') ||
                   (s[i] == ']' && top == '[')) {
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main(){
    
    return 0;
}