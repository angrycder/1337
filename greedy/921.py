class Solution:
    def minAddToMakeValid(self, S: str) -> int:
        c = k = 0
        for i in S:
            if i == '(':
                c=c+1
            elif i == ')' and c != 0:
                c=c-1
            elif i == ')' and c == 0:
                k = k+1
        return c + k
#https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/