class Solution {
public:
    void backtrack(int index, vector<int>& nums, vector<vector<int>>& result) {
        // If we've fixed positions [0..index-1], and index == n,
        // we have a complete permutation
        if (index == nums.size()) {
            result.push_back(nums);  // store current permutation
            return;
        }

        // Try putting each choice at position `index`
        for (int i = index; i < nums.size(); i++) {
            // Choose: place nums[i] at position `index`
            swap(nums[index], nums[i]);

            // Explore: fix next position
            backtrack(index + 1, nums, result);

            // Un‑choose (backtrack): restore original order
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        backtrack(0, nums, result);
        return result;
    }
};