class Solution:
    def minFallingPathSum(self, a: List[List[int]]) -> int:
        m = len(a)
        n = len(a[0])
        dp = [[0 for i in range(n+2)] for j in range(m)]
        for i in range(m):
            dp[i][0] = float("infinity")
            dp[i][-1] = float("infinity")
        for i in range(1,n+1):
            dp[-1][i]=a[-1][i-1]
        for j in range(m-2,-1,-1):
            for  i in range(n,0,-1):
                dp[j][i] = min(dp[j+1][i-1],dp[j+1][i],dp[j+1][i+1])+a[j][i-1]
        return min(dp[0])
#https://leetcode.com/problems/minimum-falling-path-sum/