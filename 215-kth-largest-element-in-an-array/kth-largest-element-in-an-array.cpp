class Solution {
public:

    int partition(vector<int>& nums, int start, int end) {
        int pivot = nums[end];
        int i = start;

        for(int j = start; j < end; j++) {
            if(nums[j] < pivot) {
                swap(nums[i], nums[j]);
                i++;
            }
        }

        swap(nums[i], nums[end]);
        return i;
    }

    int findKthLargest(vector<int>& nums, int k) {

        int n = nums.size();
        int target = n - k;

        int start = 0;
        int end = n - 1;

        while(start <= end) {

            int pivot = partition(nums, start, end);

            if(pivot == target)
                return nums[pivot];

            else if(pivot < target)
                start = pivot + 1;

            else
                end = pivot - 1;
        }

        return -1;
    }
};