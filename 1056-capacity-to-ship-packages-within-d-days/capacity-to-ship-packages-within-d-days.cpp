class Solution {
public:
    bool canShip(const vector<int>& weights, int days, int capacity) {
        int daysUsed = 1;
        int curr = 0;
        
        for (int w : weights) {
            if (curr + w <= capacity) {
                curr += w;
            } else {
                daysUsed++;
                curr = w;
                if (daysUsed > days) return false;
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low = 0, high = 0;
        for (int w : weights) {
            low = max(low, w);   // at least the heaviest
            high += w;           // at most sum of all
        }
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (canShip(weights, days, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
