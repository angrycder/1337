class Solution:
    def countSubstrings(self, s: str) -> int:
        count =0
        n = len(s)
        dp = [[0 for _ in range(n)] for _ in range(n)] 
        for i in range(n):
            dp[i][i] =1
            count+=1
        for i in range(1,n):
            for j in range(0,i):
                if j == (i-1) and s[i]==s[j]:
                    dp[j][i]=1
                    count+=1
                elif dp[j+1][i-1]==1 and s[i]==s[j]:
                    dp[j][i]=1
                    count+=1
        return count
#https://leetcode.com/problems/palindromic-substrings/