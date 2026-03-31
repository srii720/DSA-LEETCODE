class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         int start=0, end=nums.size();
        for(int j=0;j<nums.size();j++){
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]==0&&nums[i+1]!=0){
             swap(nums[i],nums[i+1]);
            }else{
                start++;
            }
        }}
       
    }
};