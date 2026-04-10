class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,left=0,MIN_LENGTH=INT_MAX;
        for(int i=0;i<nums.size();i++){

            sum+=nums[i];
            while(sum>=target){
                MIN_LENGTH=min(MIN_LENGTH,i-left+1);
                sum-=nums[left];
                left++;
            }
        }return(MIN_LENGTH==INT_MAX)?0:MIN_LENGTH;
    }
};