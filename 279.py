class Solution:
    def numSquares(self, n: int) -> int:
        """
        :type n: int
        :rtype: int
        """

        # approach: by Lagrange’s four-square theorem, every natural 
        #           number can be represented by sum of of four 
        #           integer squares
        #           And it can be represented by sum of three 
        #           integer squares if and only if it’s not in form 
        #           4^k(8m + 7)

        k = n
        while k % 4 == 0:
            k = k // 4
        if k % 8 == 7:
            return 4

        i = 0
        while i ** 2 <= n:
            j = 0
            while j ** 2 <= n-(i**2):
                if i ** 2 + j ** 2 == n:
                    return (1 if i > 0 else 0) + (1 if j > 0 else 0)
                j += 1
            i += 1

        return 3
#https://leetcode.com/problems/perfect-squares/