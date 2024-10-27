class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int currentProfit = 0;

        for (int i = 1; i < prices.size(); i++) {

            int profitChange = prices[i] - prices[i - 1];

         
            currentProfit = max(0, currentProfit + profitChange);

            maxProfit = max(maxProfit, currentProfit);
            
        }

        return maxProfit;
    }
};
