import bisect 

class Solution:
    def findNumberOfLIS(self, nums: List[int]) -> int:
        if not nums:
            return 0
        
        lst = [0] * len(nums)
        
        stack = []
        
        for i, n in enumerate(nums):
            if not stack or stack[-1] < n:
                stack.append(n)
                idx = len(stack) - 1
            else:
                idx = bisect.bisect_left(stack, n)
                stack[idx] = n
            lst[i] = idx
        
        cnt = [0] * len(lst)
        
        output = 0
        max_val = max(lst)
        
        for i, val in enumerate(lst):
            if val == 0:
                cnt[i] = 1
            else:
                for j in range(i):
                    if lst[j] == val - 1 and nums[j] < nums[i]:
                        cnt[i] += cnt[j]
                        
            if val == max_val:
                output += cnt[i]                
        return output
#https://leetcode.com/problems/number-of-longest-increasing-subsequence/