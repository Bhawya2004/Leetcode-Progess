class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch:s){
            if(!st.empty() && ch==')' && st.top()=='('){
                st.pop();
            }
            else if(!st.empty() && ch=='}' && st.top()=='{'){
                st.pop();
            }
            else if(!st.empty() && ch==']' && st.top()=='['){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};