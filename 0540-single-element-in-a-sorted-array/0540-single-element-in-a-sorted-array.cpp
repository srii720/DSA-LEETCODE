class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            // Check if mid is at an even index
            bool isEven = (mid % 2 == 0);
            
            if (nums[mid] == nums[mid + (isEven ? 1 : -1)]) {
                // Pattern is still intact, single element is to the right
                start = mid + 1;
            } else {
                // Pattern is broken, single element is to the left or at mid
                end = mid;
            }
        }
        return nums[start];
    }
};