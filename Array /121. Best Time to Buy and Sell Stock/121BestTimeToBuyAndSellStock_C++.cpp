class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int ans = 0;
        
        for (int i = 0; i < prices.size(); i++){
            if (buy > prices[i]){
                buy = prices[i];
            } else if (prices[i] - buy > ans){
                ans = prices[i] - buy;
            }
        }
        return ans;
    }
};
