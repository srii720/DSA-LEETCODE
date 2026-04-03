class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,n=nums.size(),max_count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
                max_count=max(max_count,count);
               
            }else{
                count=0;
            }
            
        }
        return max_count;

        
    }
};