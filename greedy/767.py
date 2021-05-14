from collections import Counter

class Solution:
    def reorganizeString(self, S: str) -> str:
        """ 
        Time O(N), Space O(A). (N: number of characters, A: Alphabet size)
        First fills the most frequent character by creating enough groups to hold it.
        Then adds all other chars (order doesn't matter) to each group to form a valid string.
        If the max_char has count more than half the array, there won't be a valid string, return ''
        """
        # Getting the char counts
        counts = Counter(S)
        max_count, max_char = 0, 0
        
        # Getting the character with the maximum count (if there are multiple maximum, it doesn't matter)
        # What matters is that we have as many groups as the maximum character count
        for char, count in counts.items():
            if count > max_count:
                max_count = count
                max_char = char
                
        # If the max count is bigger than half threshold (+1) (different for odd and even case)
        # There won't be a valid string sequence
        if max_count > (len(S) + 1) // 2:
            return ''

        # Each group will have one copy of the max element
        groups = [max_char for _ in range(max_count)]
        counts.pop(max_char)

        g_len = len(groups)
        g_idx = 0 # The idx of the current group where we are adding
        
        for char, count in counts.items(): # O(N) loop for N characters total
            for j in range(count):
                groups[g_idx] += char # Would in theory be better to do these with lists, but practically it's slower for shorter strings
                g_idx += 1
                if g_idx == g_len: # Circling back to the first group and continuing to make additions
                    g_idx = 0
    
        return ''.join(groups)
#https://leetcode.com/problems/reorganize-string/
