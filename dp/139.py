class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        @lru_cache
        def helper(idx):
            if idx == len(s):
                return True
            if idx > len(s):
                return False
            
            for word in wordDict:
                if s.find(word, idx) == idx and helper(idx+len(word)) == True:
                        # Matched following words
                        return True
            return False
        return helper(0)
#https://leetcode.com/problems/word-break/