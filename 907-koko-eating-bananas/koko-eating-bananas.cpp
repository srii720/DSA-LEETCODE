class Solution {
public:
    long long hoursNeeded(vector<int>& piles, int k) {
        long long hours = 0;                       // declare & reset
        for (int i = 0; i < piles.size(); i++) {
            hours += (piles[i] + k - 1) / k;       // ceil division
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();

        int start = 1;
        int end = piles[0];                        // or 0, then max

        for (int i = 1; i < n; i++) {
            if (piles[i] > end) end = piles[i];    // max element
        }
        // binary search on answer
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (hoursNeeded(piles, mid) <= h) {
                end = mid;                         // mid works, try smaller
            } else {
                start = mid + 1;                   // mid too slow
            }
        }

        return start;                              // or end (same here)
    }
};
