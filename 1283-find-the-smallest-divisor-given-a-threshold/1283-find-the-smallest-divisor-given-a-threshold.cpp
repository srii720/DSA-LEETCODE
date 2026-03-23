class Solution {
public:
    int computeSum(vector<int>& nums, int d) {
        int sum = 0;
        for (int num : nums) {
            sum += (num + d - 1) / d; // ceil division
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = high;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (computeSum(nums, mid) <= threshold) {
                ans = mid;
                high = mid - 1; // try smaller
            } else {
                low = mid + 1;  // need bigger divisor
            }
        }
        return ans;
    }
};