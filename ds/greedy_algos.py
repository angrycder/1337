def maxProfit(prices):
        m = float('infinity')
        profit = 0
        for i in prices:
            m =min(i,m)
            profit = max(i-m,profit)
        return profit


