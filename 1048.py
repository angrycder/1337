class Solution:
    def longestStrChain(self, words: List[str]) -> int:
        if len(words) == 0:
            return 0

        words.sort(key=len)
		# a dictionary where the key is the word and the value is the longest sub string since
        words_map = {}
        for word in words:
		    # the word itself constitutes a sub-string, thus the `1` first
			# then we break the word apart, letter by letter with word[:i] + word[i + 1:]
			# we look in the dictionary to see if we have encountered it previously, otherwise it is 0
			# we take the longest substring since then (thus the max)
            words_map[word] = 1 + max(words_map.get(word[:i] + word[i + 1:], 0) for i in range(len(word)))

        return max(words_map.values())
#https://leetcode.com/problems/longest-string-chain/