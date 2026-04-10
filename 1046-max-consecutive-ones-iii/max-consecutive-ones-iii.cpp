class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,zero_counter=0,max_len=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero_counter++;
            }
            while(zero_counter>k){
                if(nums[left]==0){
                zero_counter--;
            }
                left++;

            }
            
            max_len=max(max_len,i-left+1);




        }return max_len;
        
    }
};