class Solution {
public:
    long long hour_needed(vector<int>&piles,int k){
        long long hours=0;
        for(int i=0;i<piles.size();i++){
            hours+=(piles[i]+k-1)/k;

        }return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       long long n=piles.size();
        long long start=1;
        long long end=piles[0];
        for (int i = 1; i < n; i++) {
            if (piles[i] > end) end = piles[i];    // max element
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            if(hour_needed(piles,mid)<=h){
                end=mid-1;
            }else{
                start=mid+1;
            }

        }
        return start;
    }
};