class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";

        string first = strs[0];
        string ans = "";

        for(int i = 0; i < first.length(); i++) {
            for(int j = 1; j < strs.size(); j++) {
                if(i >= strs[j].length() || strs[j][i] != first[i]) {
                    return ans;
                }
            }
            ans += first[i];
        }

        return ans;
    }
};