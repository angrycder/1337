class Solution:
    def findDuplicate(self, nums):
        # Find the intersection point of the two runners.
        tortoise = hare = nums[0]
        while True:
            tortoise = nums[tortoise]
            hare = nums[nums[hare]]
            if tortoise == hare:
                break
        
        # Find the "entrance" to the cycle.
        tortoise = nums[0]
        while tortoise != hare:
            tortoise = nums[tortoise]
            hare = nums[hare]
        
        return hare
#https://leetcode.com/problems/find-the-duplicate-number/
#https://www.youtube.com/watch?v=pKO9UjSeLew
#https://www.youtube.com/watch?v=9YTjXqqJEFE