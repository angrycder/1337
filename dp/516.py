def lcs(x,y):
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
class Solution:
    def longestPalindromeSubseq(self, s: str) -> int:
        return lcs(s,s[::-1])
#https://leetcode.com/problems/longest-palindromic-subsequence/submissions/