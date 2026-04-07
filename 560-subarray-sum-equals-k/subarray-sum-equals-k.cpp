class Solution {
public:
    int subarraySum(vector<int>& nums, int target) {
        std::unordered_map<int,int>mp;mp[0]=1;
        int prefix_sum=0, count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            prefix_sum+=nums[i];
            if(mp.find(prefix_sum-target)!=mp.end()){
              count+=mp[prefix_sum-target];
            }mp[prefix_sum]++;

        }
        return count;
        
    }
};