class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int maximumamt = 0;

        while (left < right) {
            int width = right - left;
            int area = width * min(height[left], height[right]);
            maximumamt = max(maximumamt, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maximumamt;
    }
};