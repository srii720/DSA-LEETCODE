class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());
        int ans = -1;

        auto feasible = [&](int d) {
            long long sum = 0;
            for (int x : nums) {
                sum += (x + d - 1) / d;  // ceil(x / d)
                if (sum > threshold) return false; // early break
            }
            return sum <= threshold;
        };

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (feasible(mid)) {
                ans = mid;
                right = mid - 1;  // search smaller divisor
            } else {
                left = mid + 1;   // need larger divisor
            }
        }
        return ans;
    }
};
