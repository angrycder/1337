class Solution:
    def rob(self, nums: List[int]) -> int:
        n =len(nums)
        if not nums:
            return 0
        elif n==1:
            return  nums[0]
        run_l =[0]*n
        run_l[0]=nums[0]
        run_l[1]=max(nums[0],nums[1])
        for i in range(2,n):
            run_l[i]=max(run_l[i-1],run_l[i-2]+nums[i])
        return run_l[-1]
#https://leetcode.com/problems/house-robber/