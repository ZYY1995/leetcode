class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_prices = 0;
        int value = 0;
        for(int i=prices.size()-1;i>=0;i--)
        {
            value = max(max_prices - prices[i],value);
            max_prices = max(max_prices,prices[i]);
        }
        return value;
    }
};