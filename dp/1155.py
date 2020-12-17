from functools import cache
class Solution:
    def numRollsToTarget(self, d: int, f: int, target: int) -> int:
        @cache
        def helper(d,target):
            if target <= 0 or target > (d * f):
                return 0
            if d == 1:
                return 1
            res = 0
            for i in range(1,f+1):
                res += helper(d-1,target-i)
            return res
        return helper(d, target) % (10 ** 9 + 7)

#https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/