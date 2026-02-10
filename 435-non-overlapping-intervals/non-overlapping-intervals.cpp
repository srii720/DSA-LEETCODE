class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& arr){
        if (arr.size() <= 1) return 0;

        // sort by end time
        sort(arr.begin(), arr.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        int count_to_del = 0;
        int lastEnd = arr[0][1];

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i][0] < lastEnd) {
                // overlap
                count_to_del++;
            } else {
                // safe
                lastEnd = arr[i][1];
            }
        }

        return count_to_del;
    }
};