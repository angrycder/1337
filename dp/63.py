class Solution:
    def uniquePathsWithObstacles(self, o: List[List[int]]) -> int:
        m=len(o[0])
        n=len(o)
        dp=[[0 for i in range(m)]for j in range(n)]
        for i in range(n):
            if o[i][0]:
                break 
            dp[i][0]=1*(not o[i][0])
        for i in range(m):
            if o[0][i]:
                break
            dp[0][i]=1
        for i in range(1,n):
            for j in range(1,m):
                dp[i][j]=(dp[i-1][j]+dp[i][j-1])*(not o[i][j])
        return dp[n-1][m-1]
#https://leetcode.com/problems/unique-paths-ii/