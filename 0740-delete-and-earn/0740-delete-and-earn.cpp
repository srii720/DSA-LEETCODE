class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {

        int maxVal = 0;
        for(int value : nums)
            maxVal = max(maxVal, value);

        vector<int> points(maxVal + 1, 0);

        for(int value : nums)
            points[value] += value;

        int prev1 = 0;
        int prev2 = 0;

        for(int i = 0; i <= maxVal; i++) {
            int take = points[i] + prev2;
            int skip = prev1;
            int curr = max(take, skip);

            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};