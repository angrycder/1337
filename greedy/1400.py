from collections import Counter
class Solution:
    def canConstruct(self, s: str, k: int) -> bool:
        d = Counter(s)
        ret = 0
        for i in d:
            if d[i]%2==1:
                ret=ret+1
        return ret <= k and len(s) >= k
#https://leetcode.com/problems/construct-k-palindrome-strings/