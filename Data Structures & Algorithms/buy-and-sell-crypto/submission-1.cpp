class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_price=prices[0];
        int maxprofit=0;
        for(int i=0;i<n;i++){
            min_price=min(min_price,prices[i]);
            int profit=prices[i]-min_price;
            maxprofit=max(maxprofit,profit);
        }
        return maxprofit;
        
    }
};
