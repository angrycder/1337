class Solution:
    def largestDivisibleSubset(self, nums: List[int]) -> List[int]:
        if (n := len(nums)) <= 1:
            return nums
        nums.sort()
        dp = [1]*n
        m = 0
        for i in range(1,n):
            for j in range(i-1,-1,-1):
                if nums[i]%nums[j] == 0:
                    dp[i] = max(dp[i],dp[j]+1)
        print(dp)
        for i in range(1,n):
            if dp[i]>dp[m]:
                m = i
        temp = nums[m]
        current = dp[m]
        print(m)
        ret = []
        for i in range(m,-1,-1):
            if temp%nums[i] == 0 and current == dp[i]:
                ret.append(nums[i])
                temp = nums[i]
                current-=1
        return ret
#https://leetcode.com/problems/largest-divisible-subset/