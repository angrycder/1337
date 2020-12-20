class Solution:
    def minimumDeletions(self, s: str) -> int:
        a = s.count('a')
        b = 0
        res = len(s)
        for ch in s:
            if ch == 'b':
                res = min(res, a + b)
                b += 1
            else:
                a -= 1
        return min(res, a+b)
#https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/