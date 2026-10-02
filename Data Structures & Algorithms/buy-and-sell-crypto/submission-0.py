class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxPrice=0
        maxProfit=0
        for i in range(len(prices)-1,-1,-1):
            maxPrice = max(prices[i],maxPrice)
            maxProfit = max(maxPrice - prices[i],maxProfit)
        return maxProfit