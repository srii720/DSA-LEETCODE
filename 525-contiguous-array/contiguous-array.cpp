class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        std::unordered_map<int,int>mp;mp[0]=-1;
        int sum=0,max_len=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)sum+=-1;
            else sum+=1;
            if(mp.find(sum)!=mp.end()){
                max_len=max(max_len,i-mp[sum]);
            }else{
                mp[sum]=i;
            }

        }return max_len;
        
    }
};