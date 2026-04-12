class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;           // handle empty input

        int k = 1;                            // index of next unique position
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {     // found a new unique value
                nums[k] = nums[i];            // place it at position k
                k++;
            }
        }
        return k;                             // number of unique elements
    }
};