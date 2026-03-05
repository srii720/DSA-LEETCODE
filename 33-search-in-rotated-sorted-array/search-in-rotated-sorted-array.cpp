class Solution {
public:
    int search(vector<int>& nums, int target) {
         int n = nums.size() - 1;
    int start = 0, end = n;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(nums[mid] == target)
            return mid;

        if(nums[start] <= nums[mid]){  // left side sorted
            if(target >= nums[start] && target <= nums[mid]){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }else{  // right side sorted
            if(target >= nums[mid] && target <= nums[end]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
    }

    return -1;
    }
};