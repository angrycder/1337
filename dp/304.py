class NumMatrix(object):

    def __init__(self, matrix):
        """
        :type matrix: List[List[int]]
        """
        row = len(matrix)
        if row < 1:
            return
        col = len(matrix[0])
        self.sum_matrix = [[0] * col for _ in range(row)]
        self.matrix = matrix
        
        for i in range(row):
            total = 0
            for j in range(col):
                total += matrix[i][j]
                if i > 0:
                    self.sum_matrix[i][j] = total + self.sum_matrix[i-1][j]
                else:
                    self.sum_matrix[i][j] = total
       
    def sumRegion(self, row1, col1, row2, col2):
        """
        :type row1: int
        :type col1: int
        :type row2: int
        :type col2: int
        :rtype: int
        """
        res = self.sum_matrix[row2][col2]
        
        if row1 == 0 and col1 == 0:
            return res
        elif row1 == 0:
            return res - self.sum_matrix[row2][col1-1]
        elif col1 == 0:
            return res - self.sum_matrix[row1-1][col2]
        else:        
            return res - self.sum_matrix[row1-1][col2] - self.sum_matrix[row2][col1-1] + self.sum_matrix[row1-1][col1-1]
#https://leetcode.com/problems/range-sum-query-2d-immutable/