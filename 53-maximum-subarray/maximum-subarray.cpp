class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_sum=0;
        int max_sum=nums[0];//current index is the baisc
        for(int num:nums){
            current_sum+=num;
            max_sum=max(max_sum,current_sum);
            if(current_sum<0){
                current_sum=0;
            }

        }
        return max_sum;
    }
};