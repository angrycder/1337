from functools import cache
class Solution:
    def countVowelStrings(self, n: int) -> int:
        @cache
        def helper(prev,n):
            ret = 0
            arr =["a","e","i","o","u"]
            dic = {'a': 0, 'e': 1, 'i': 2, 'o': 3, 'u': 4}
            if n == 0:
                return 1
            for i in arr[dic[prev]:5]:
                ret = ret + helper(i,n-1)
            return ret 
        return helper("a",n)
#https://leetcode.com/problems/count-sorted-vowel-strings/