from functools import lru_cache
class Solution:
    def findTargetSumWays(self, nums: List[int], S: int) -> int:
        @lru_cache(None)
        def helper(t,arr):
            if not arr and t != 0:
                return 0
            if not arr and t == 0:
                return 1
            return helper(t-arr[0],arr[1:]) + helper(t+arr[0],arr[1:])
        return helper(S,tuple(nums))
#https://leetcode.com/problems/target-sum/