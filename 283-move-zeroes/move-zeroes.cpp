class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      int start=0;
      if(nums.size()<=1)return;
      for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            std::swap(nums[i],nums[start]);
            start++;
        }
      }
        
    }
};