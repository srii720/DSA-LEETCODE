class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<1)return 0;
        int store=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[store]){store++;
            nums[store]=nums[i] ;
                

            }
        } return store+1;
        
    }
};