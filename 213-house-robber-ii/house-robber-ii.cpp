class Solution {
public:
    // Linear robber for range [l, r]
    int robRange(vector<int>& nums, int l, int r) {
        int prev2 = 0;   // dp[i-2]
        int prev1 = 0;   // dp[i-1]

        for (int i = l; i <= r; ++i) {
            int pick = nums[i] + prev2;
            int skip = prev1;
            int cur = max(pick, skip);

            prev2 = prev1;
            prev1 = cur;
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) return 0;
        if (n == 1) return nums[0];   // Important edge case

        // Case 1: Exclude last house
        int takeFirst = robRange(nums, 0, n - 2);

        // Case 2: Exclude first house
        int skipFirst = robRange(nums, 1, n - 1);

        return max(takeFirst, skipFirst);
    }
};
