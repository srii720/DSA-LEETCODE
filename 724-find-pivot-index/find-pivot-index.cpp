class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int right=0,left=0;
        for(int i=0;i<nums.size();i++){
            right=sum-nums[i]-left;
            
            if(left==right){
                return i;
            }
            left+=nums[i];
        }return -1;
        
        

        
    }
};