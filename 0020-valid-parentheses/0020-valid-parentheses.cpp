class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s) {
            if(c == '(' || c == '{' || c == '[') {
                st.push(c); // push opening brackets
            } else {
                if(st.empty()) return false; // no matching open
                char top = st.top();
                st.pop();
                if((c == ')' && top != '(') || 
                   (c == '}' && top != '{') || 
                   (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty(); // valid only if stack is empty
    }
};
