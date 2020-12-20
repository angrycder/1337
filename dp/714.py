class Solution(object):
    def maxProfit(self, prices, fee):
        cash, hold = 0, -prices[0]
        for i in range(1, len(prices)):
            cash = max(cash, hold + prices[i] - fee)
            hold = max(hold, cash - prices[i])
        return cash
#https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/
#class Solution:
#    def maxProfit(self, prices: List[int]) -> int:
#        m = float('infinity')
#        profit = 0
#        for i in prices:
#            m =min(i,m)
#            profit = max(i-m,profit)
#        return profit
#https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/