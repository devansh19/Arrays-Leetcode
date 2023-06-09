class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit = 0;
        for(int i=1; i<prices.size(); i++) {
            int dif = prices[i] - prices[i-1];
            if(dif > 0) profit += dif;
        }
        return profit;
    }
};
