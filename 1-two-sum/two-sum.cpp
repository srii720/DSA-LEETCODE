class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++){
            int complement=target-nums[i];
            if(mp.find(target-nums[i])!=mp.end()){
                return {mp[complement],i};

            }
            mp[nums[i]]=i;
            
        }return {};

        
    }
};