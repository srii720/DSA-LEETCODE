class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& arr){
        if(arr.empty()) return 0;

        // Sort by ascending end time
        sort(arr.begin(), arr.end(),
            [](vector<int>& a, vector<int>& b){
                return a[1] < b[1];
            });

        int count = 0;
        int prevend = arr[0][1];

        for(int i = 1; i < arr.size(); i++){
            if(arr[i][0] < prevend){  // Overlap
                count++;
            } else {
                prevend = arr[i][1];
            }
        }
        return count;
    }
};
///[[1,2],[2,3],[3,4],[1,3]]
//first element must be smaller then last one
