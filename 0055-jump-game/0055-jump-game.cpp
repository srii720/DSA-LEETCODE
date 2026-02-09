class Solution {
public:
    bool canJump(vector<int>& nums) {
        //each element in array represent the jump i gonna do in set
        int jump=nums[0];
        
        for(int i=0;i<nums.size();i++){
            if(i>jump)return false;
            jump=max(jump,i+nums[i]);

        }return true;
    }
};