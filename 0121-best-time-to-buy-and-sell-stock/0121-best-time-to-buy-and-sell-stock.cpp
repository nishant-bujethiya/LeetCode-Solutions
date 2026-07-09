class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit =0;
        int minprice = prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minprice){
                minprice = prices[i];
            }
            int profit = prices[i] - minprice;
            if(profit > MaxProfit){
                MaxProfit = profit;
            }
        }
    return MaxProfit;
    }
};