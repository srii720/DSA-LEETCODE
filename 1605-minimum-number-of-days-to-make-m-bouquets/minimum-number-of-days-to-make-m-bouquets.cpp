class Solution {
public:
    
    long long minDays(vector<int>& bloomDay, int m, int k) {
        long long n = bloomDay.size();
        long long flower_needed=1LL*m*k;
        if (n < flower_needed) return -1;

        int start = *min_element(bloomDay.begin(), bloomDay.end());
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            long long count = 0;
            long long bouquets = 0;

            for (int i = 0; i < n; i++) {

                if (bloomDay[i] <= mid)
                    count++;
                else
                    count = 0;

                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            }

            if (bouquets >= m) {
                ans = mid;
                end = mid - 1;
            } 
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};