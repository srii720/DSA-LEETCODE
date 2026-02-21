class Solution {
public:
    int climbStairs(int n){
        //n i sthe no of steps taken
        //either 1 or two
        if (n <= 2) return n;
        int prev2=1;
        int prev1=2;
        for(int i=3;i<=n;i++){
            int current=prev1+prev2;
            prev2=prev1;
            prev1=current;
        }
        return prev1;



        
    }
};