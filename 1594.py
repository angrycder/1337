class Solution:
    def maxProductPath(self, grid: List[List[int]]) -> int:
        r = len(grid)
        c = len(grid[0])
        dp = [[[-float('infinity'),float('infinity')] for _ in range(c)] for _ in range(r)]
        dp[0][0] = (grid[0][0],grid[0][0])
        for i in range(1,c):
            dp[0][i] = [grid[0][i]*dp[0][i-1][0],grid[0][i]*dp[0][i-1][0]]
        for i in range(1,r):
            dp[i][0] = [grid[i][0]*dp[i-1][0][0],grid[i][0]*dp[i-1][0][0]]
        for i in range(1,r):
            for j in range(1,c):
                t = grid[i][j]
                arr = [t*dp[i-1][j][1],t*dp[i][j-1][1],t*dp[i-1][j][0],t*dp[i][j-1][0]]
                dp[i][j] = [max(arr),min(arr)]
        ret = max(dp[-1][-1])
        if ret >= 0:
            return ret%(10**9 + 7)
        else:
            return -1
#https://leetcode.com/problems/maximum-non-negative-product-in-a-matrix/