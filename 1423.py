class Solution:
    def maxScore(self, card_points: List[int], k: int) -> int:
        left_sum, right_sum = 0, 0
        
        left_sum = sum(card_points[:k])
        ans = left_sum
        
        for i in range(1, k + 1):
            left_sum -= card_points[k - i]
            right_sum += card_points[-i]
            
            ans = max(ans, left_sum + right_sum)
        
        return ans
#https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/