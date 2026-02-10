class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        //basically need two pointer
        int left=0,right=n-1;
        int maxarea=0;
        while(left<right){
            int width=right-left;
            int currarea=width*min(height[right],height[left]);
            maxarea=max(maxarea,currarea);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }return maxarea;

        
    }
};