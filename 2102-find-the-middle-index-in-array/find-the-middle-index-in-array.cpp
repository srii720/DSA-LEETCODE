class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total_sum=accumulate(nums.begin(),nums.end(),0);
        int left=0,right=0;

        for(int i=0;i<nums.size();i++){
            right=total_sum-nums[i]-left;
            if(left==right){return i;}
            left+=nums[i];
           
        }
        return -1;
        
    }
};