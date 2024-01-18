class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy=prices[0]
        max_profit=0
        for price in prices:
            if buy>price:
                buy=price
            
            max_profit=max(max_profit,price-buy)
        
        return max_profit

        
