class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int min_price=prices[0];
        int max_profit=0;
        for(int i=1;i<prices.size();i++){
            int profit_today=prices[i]-min_price;
            max_profit=max(max_profit,profit_today);
            min_price=min(min_price,prices[i]);

           

            

        }return max_profit;
    }
};