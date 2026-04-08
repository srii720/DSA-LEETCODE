class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        long long target = 1LL * threshold * k;

        long long windowSum = 0;
        // initial window
        for (int i = 0; i < k; ++i) {
            windowSum += arr[i];
        }

        int count = 0;
        if (windowSum >= target) {
            ++count;
        }

        // slide the window
        for (int i = k; i < n; ++i) {
            windowSum += arr[i];        // add right element
            windowSum -= arr[i - k];    // remove left element

            if (windowSum >= target) {
                ++count;
            }
        }

        return count;
    }
};