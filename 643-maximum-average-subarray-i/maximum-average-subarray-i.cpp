class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double length=0;
        double prefix_sum=0;int left=0;double max_sum= INT_MIN;
        for(int i=0;i<nums.size();i++){
            prefix_sum+=nums[i];
            if(i-left+1>k){
            prefix_sum-=nums[left];

            left++;
            }
            if(i-left+1==k){

            max_sum=max(max_sum,prefix_sum);

            }

        } 
        return max_sum/k;
   
    }
};