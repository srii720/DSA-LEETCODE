class Solution {
public:
    int romanToInt(string s) {
        // Step 1: mapping from Roman symbols to values
        unordered_map<char, int> val = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int n = s.size();
        int ans = val[s[n - 1]];      // start with last character

        // Step 2: process from left to (second-last)
        for (int i = 0; i < n - 1; ++i) {
            int curr = val[s[i]];
            int next = val[s[i + 1]];

            if (curr < next) {
                // subtractive case (e.g., IV, IX, XL, XC, CD, CM)
                ans -= curr;
            } else {
                // normal additive case
                ans += curr;
            }
        }

        return ans;
    }
};