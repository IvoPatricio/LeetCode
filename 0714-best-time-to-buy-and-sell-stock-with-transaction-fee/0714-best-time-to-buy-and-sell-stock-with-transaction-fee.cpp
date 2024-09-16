class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        if (prices.size() == 0)
            return 0;
        int profit = 0;
        int cash_fee = -prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            profit = max(profit, cash_fee + prices[i] - fee);
            cash_fee = max(cash_fee, profit - prices[i]);
        }
        return profit;
    }
};