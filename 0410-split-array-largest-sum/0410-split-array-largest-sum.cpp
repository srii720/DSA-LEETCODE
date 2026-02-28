class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int max_val = 0;
        int total_sum = 0;

        // Step 1: Find max element and total sum
        for(int num : nums) {
            max_val = max(max_val, num);
            total_sum += num;
        }

        int start = max_val;
        int end = total_sum;
        int answer = total_sum;

        // Step 2: Binary search on answer
        while(start <= end) {
            int mid = start + (end - start) / 2;

            int count = 1;
            int current_sum = 0;

            // Step 3: Greedy partition check
            for(int num : nums) {
                if(current_sum + num > mid) {
                    count++;
                    current_sum = num;
                } else {
                    current_sum += num;
                }
            }

            // Step 4: Adjust search space
            if(count > k) {
                start = mid + 1;   // mid too small
            } else {
                answer = mid;      // valid answer
                end = mid - 1;     // try smaller
            }
        }

        return answer;
    }
};