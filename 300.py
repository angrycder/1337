from bisect import bisect_left
class Solution:  
    def lengthOfLIS(self, nums: List[int]) -> int:
        dp = []
        for n in nums:
            j = bisect_left(dp, n)
            if j < len(dp): dp[j] = n
            else: dp.append(n)
        return len(dp) 
#https://www.youtube.com/watch?v=TocJOW6vx_I
#https://leetcode.com/problems/longest-increasing-subsequence