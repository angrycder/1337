from functools import cache

@cache
def fact(n):
    return n * fact(n-1) if n else 1

class Solution:
    def countNumbersWithUniqueDigits(self, n: int) -> int:
        ret = 0
        for i in range(1,n+1):
            ret += int(9*fact(9)//fact(9-i+1))
        return ret + 1
#https://leetcode.com/problems/count-numbers-with-unique-digits/