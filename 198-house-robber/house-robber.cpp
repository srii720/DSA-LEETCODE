class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1=0,prev2=0;
        for(int i=0;i<nums.size();i++){
            int take=nums[i]+prev2;
            int skip=prev1;
            int current=max(skip,take);
            prev2=prev1;
            prev1=current;
            
        }return prev1;
       


    }

};