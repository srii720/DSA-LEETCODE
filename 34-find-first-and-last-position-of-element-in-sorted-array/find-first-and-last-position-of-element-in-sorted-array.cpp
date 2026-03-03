class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int first_occourance=-1,last_occourance=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                first_occourance=mid;
                end=mid-1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }

        }
        start=0;end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                last_occourance=mid;
                start=mid+1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return {first_occourance,last_occourance};
        
    }
};