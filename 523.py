class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
            if len(nums)==1:
                  return False
            if sum(nums) ==0 or any(nums[i]==nums[i+1]==0 for i in range(len(nums)-1)):
                   return True
            if k != 0 and sum(nums)<abs(k):
                   return False

            for i in range (len(nums)-1):
                for j in range(i+1,len(nums)):
                        x= nums[i:j+1]
                        if k != 0 and sum(x)%k==0  : #and len(x)>1
                                  return True
            return False
#https://leetcode.com/problems/continuous-subarray-sum/