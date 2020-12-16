class Solution:
    def countSquares(self, matrix: List[List[int]]) -> int:
        n=len(matrix)
        m=len(matrix[0])
        count=0
        finalmatrix=[[0]*(m+1) for _ in range(n+1)]
        
        for i in range(1,n+1):
            for j in range(1,m+1):
                if(matrix[i-1][j-1]==1):
                    finalmatrix[i][j]=1+min(finalmatrix[i][j-1],finalmatrix[i-1][j-1],finalmatrix[i-1][j])
                    count+=finalmatrix[i][j]
        return count
#https://leetcode.com/problems/count-square-submatrices-with-all-ones/