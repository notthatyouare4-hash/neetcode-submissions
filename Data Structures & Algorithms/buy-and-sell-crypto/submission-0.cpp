class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int buyp=prices[0], profit=0;

        for(int i=0; i<prices.size(); i++){
            profit = max(profit,prices[i]-buyp);
            buyp = min(buyp,prices[i]);
        }

        return profit;
    }
};
