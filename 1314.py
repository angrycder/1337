class Solution:
    def matrixBlockSum(self, mat: List[List[int]], K: int) -> List[List[int]]:
        
        m = len(mat)
        n = len(mat[0])
        
		# initialize the output
        answer = [[0 for j in range(n)] for i in range(m)]
        
		# code up the instructions with the max/min trick
        for i in range(m):
            for j in range(n):
                answer[i][j] = sum(
                    mat[r][c] for r in range(max(0, i-K), min(m, i+K+1)) 
                              for c in range(max(0, j - K), min(n, j+K+1))
                )
        
        return answer
#https://leetcode.com/problems/matrix-block-sum/