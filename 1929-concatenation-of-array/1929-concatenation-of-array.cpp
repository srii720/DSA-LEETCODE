class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector<int>ans;
        ans.reserve(2 * nums.size());
       for (int x : nums) ans.push_back(x);
       for (int x : nums) ans.push_back(x);
       return ans;
    }
};