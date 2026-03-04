class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size()-1;
        int start=0;
        int end=n;
        while(start<end){
            int mid=start+(end-start)/2;
            if(nums[mid]>nums[mid+1]){
                end=mid;
            }else{
                start=mid+1;
            }
        }
        return start;
    }
};