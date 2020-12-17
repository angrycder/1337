class Solution:
    def numDecodings(self, s: str) -> int:
        if (n:=len(s)) == 0 :
            return 0
        if s[0] == "0":
            return 0
        pre = curr = ret = 1
        for i in range(1,n):
            if s[i]=="0" and s[i-1]!="1" and s[i-1]!="2":
                return 0
            if s[i]=="0":
                ret = pre
            elif int(s[i-1:i+1])<27 and s[i-1]!="0":
                ret = pre+curr
            pre = curr
            curr = ret
        return ret
#https://leetcode.com/problems/decode-ways/