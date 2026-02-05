class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_prices=prices[0];
        int max_price=0;
        for(int i=0;i<prices.size();i++){
            min_prices=min(min_prices,prices[i]);
            max_price=max(max_price,prices[i]-min_prices);
        }
        return max_price;
    }
};