class Solution {
public:
    int subarraySum(vector<int>& nums, int target) {
        int prefix=0,count=0;
        std::unordered_map<int,int>um;
        um[0]=1;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            if(um.find(prefix-target)!=um.end()){
                count+=um[prefix-target];
            }
            um[prefix]++;
        }
        return count;
        
    }
};