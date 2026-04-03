class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        
        int sum = 0;
        
        // Step 1: first window
        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        int max_sum = sum;

        // Step 2: sliding window
        for(int i = k; i < n; i++) {
            sum += nums[i];        // add new
            sum -= nums[i - k];    // remove old
            
            max_sum = max(max_sum, sum);
        }

        return (double)max_sum / k;
    }
};