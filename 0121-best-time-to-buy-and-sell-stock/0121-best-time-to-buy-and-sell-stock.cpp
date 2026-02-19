class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        // check the price from first
        for(int i = 1; i < prices.size(); i++){
            if(buyPrice > prices[i]){
                buyPrice = prices[i];
            }

            // to calculate the profit
            profit = max(profit, prices[i] - buyPrice);
       
        }
        return profit;
    }
};