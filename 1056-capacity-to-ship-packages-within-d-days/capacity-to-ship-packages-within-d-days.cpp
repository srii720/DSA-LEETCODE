class Solution {
public:
   int howmanydays(vector<int>& weights, int capacity) {
    int days = 1;
    int current_load = 0;

    for (int weight : weights) {
        if (current_load + weight <= capacity) {
            current_load += weight;
        } else {
            days++;
            current_load = weight;
        }
    }
    return days;
}
int shipWithinDays(vector<int>& weights, int days) {
    int start = *max_element(weights.begin(), weights.end());
    int end = accumulate(weights.begin(), weights.end(), 0);
    while(start<end){
        int mid=start+(end-start)/2;
        int required_days=howmanydays(weights,mid);
        if(required_days<=days){
            end=mid;
         }else{
            start=mid+1;
         }


        }  
        return start;
    }
};