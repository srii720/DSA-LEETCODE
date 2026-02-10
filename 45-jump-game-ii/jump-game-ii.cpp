class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size()-1;
        int jump=0;
        int farthest=0,currentend=0;
        for(int i=0;i<n;i++){
            farthest=std::max(farthest,i+nums[i]);
            if(i==currentend){
                jump++;
                currentend=farthest;
            }

        }
        return jump;
    }
};