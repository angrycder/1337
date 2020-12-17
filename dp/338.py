import math
class Solution:
    def countBits(self, n: int) -> List[int]:
        dp =[0]*(n+1)
        if n==0:
            return dp
        dp[1]=1
        for i in range(2,n+1):
            x=int(pow(2,int(math.log2(i))))
            dp[i]=dp[i-x]+1
        return dp
#https://leetcode.com/problems/counting-bits/submissions/