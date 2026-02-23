class Solution {
public:
    // Linear robber for range [l, r]
    int robRange(vector<int>& nums, int l, int r) {
        int prev2 = 0;
        int prev1 = 0;

        for (int i = l; i <= r; i++) {
            int take = nums[i] + prev2;
            int skip = prev1;
            int current = max(take, skip);

            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) return 0;
        if (n == 1) return nums[0];

        int case1 = robRange(nums, 0, n - 2);
        int case2 = robRange(nums, 1, n - 1);

        return max(case1, case2);
    }
};