class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int> freq;
        int repeated = -1, missing = -1;
        int n = grid.size();

        // Step 1: count frequency
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                freq[grid[i][j]]++;
                if (freq[grid[i][j]] == 2) {
                    repeated = grid[i][j];
                }
            }
        }

        // Step 2: find missing number
        for (int num = 1; num <= n * n; num++) {
            if (freq[num] == 0) {
                missing = num;
                break;
            }
        }

        return {repeated, missing};
    }
};