import functools
class Solution:
    def longestCommonSubsequence(self, x: str, y: str) -> int:
        m = len(x)
        n = len(y)
        l = [[None]*(n + 1) for i in range(m + 1)]
        for i in range(m + 1):
            for j in range(n + 1): 
                if i == 0 or j == 0 :
                    l[i][j] = 0
                elif x[i-1] == y[j-1]:
                    l[i][j] = l[i-1][j-1]+1
                else:
                    l[i][j] = max(l[i-1][j], l[i][j-1])
        return l[m][n]
#https://leetcode.com/problems/longest-common-subsequence/