class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int target = k * threshold;
        int sum = 0, count = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            if (i >= k) {
                sum -= arr[i - k];  // remove left element
            }

            if (i >= k - 1 && sum >= target) {
                count++;
            }
        }

        return count;
    }
};