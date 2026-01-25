class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int totalProfit = 0;
    
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < prices[i-1]){
                totalProfit += prices[i-1] - minPrice;
                minPrice = prices[i];
            }
        }
        totalProfit += prices.back() - minPrice;
        return totalProfit;
    }
};
