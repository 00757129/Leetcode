int maxProfit(int* prices, int pricesSize) {
    if(pricesSize==0)return 0;
    int buy=10000;
    int ans=0;
    for(int i=0;i<pricesSize;i++){
        if(buy>prices[i]){
            buy=prices[i];
        }else if(prices[i]-buy>ans){
            ans=prices[i]-buy;
        }
    }
    return ans;
}
