class Solution {
public:
   int rob(std::vector<int>&nums){
    std::vector<int>dp(nums.size(),-1);
    return rob_helper(nums,0,dp);
}
int rob_helper(std::vector<int>&nums,int i,std::vector<int>&dp){
    if(i>=nums.size())return 0;
    if(dp[i]!=-1)return dp[i];
    int take=nums[i]+rob_helper(nums,i+2,dp);
    int give=rob_helper(nums,i+1,dp);
    return dp[i]=std::max(take,give);



}
};