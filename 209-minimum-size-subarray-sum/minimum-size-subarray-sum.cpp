class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int prefix_sum=0;int length=INT_MAX,left=0;
        for(int i=0;i<nums.size();i++){
            prefix_sum+=nums[i];
            while(prefix_sum>=target){
                length=min(length,i-left+1);
                prefix_sum-=nums[left];
                left++;
            }


        }return (length==INT_MAX)?0:length;
        

        
    }
};