class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(nums, 0, current, result);
        return result;
    }
    
private:
    void backtrack(vector<int>& nums, int index, 
                   vector<int>& current, vector<vector<int>>& result) {
        // Base case: reached end of array
        if (index == nums.size()) {
            result.push_back(current);
            return;
        }
        
        // Choice 1: Exclude current element
        backtrack(nums, index + 1, current, result);
        
        // Choice 2: Include current element
        current.push_back(nums[index]);
        backtrack(nums, index + 1, current, result);
        current.pop_back(); // Backtrack
    }
};