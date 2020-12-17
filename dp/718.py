def lca(arr1,arr2):
    n=len(arr1)
    m=len(arr2)
    dp=[[0 for i in range(n + 1)] for i in range(m + 1)]
    for i in range(n- 1, -1, -1):
        for j in range(m- 1, -1, -1): 
            if arr1[i]==arr2[j]:
                dp[i][j]=dp[i + 1][j + 1]+1
    ret = 0
    for i in dp:
        ret=max(ret,max(i))
    return ret
class Solution:
    def findLength(self, A: List[int], B: List[int]) -> int:
        return lca(A,B)
#https://leetcode.com/problems/maximum-length-of-repeated-subarray/