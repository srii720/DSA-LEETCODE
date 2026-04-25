class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            // If opening bracket, push to stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                // If closing bracket, stack must not be empty
                if (st.empty()) return false;
                char top = st.top();
                st.pop();
                // Check matching pair
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        // All opened must be closed
        return st.empty();
    }
};