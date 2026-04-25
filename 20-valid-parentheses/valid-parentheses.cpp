class Solution {
public:
    bool isValid(string s) {
        // Use string as a stack of chars
        string st;

        for (char c : s) {
            // If opening bracket, push to stack
            if (c == '(' || c == '{' || c == '[') {
                st.push_back(c);
            } else {
                // It is a closing bracket
                if (st.empty()) {
                    // No opening bracket to match
                    return false;
                }

                char top = st.back();
                // Check if top and current form a valid pair
                if ((top == '(' && c == ')') ||
                    (top == '[' && c == ']') ||
                    (top == '{' && c == '}')) {
                    // Valid pair: pop the opening
                    st.pop_back();
                } else {
                    // Mismatched pair
                    return false;
                }
            }
        }

        // Valid only if no unmatched opening brackets remain
        return st.empty();
    }
};