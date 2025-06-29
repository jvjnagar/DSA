"""
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.
Example 1:
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
"""

from typing import List
class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        rows = len(matrix)
        columns = len(matrix[0])        
        # Create a deep copy of the visited matrix
        visited = [[0 for _ in range(columns)] for _ in range(rows)] 
        for row in range(rows):
            for col in range(columns):
                if matrix[row][col]==0 and visited[row][col]==0:
                    visited[row][col]=1
                    for i in range(rows):  
                        if matrix[i][col]!=0:
                            visited[i][col]=1
                            matrix[i][col]=0
                    for j in range(columns):
                        if matrix[row][j]!=0:
                            visited[row][j]=1
                            matrix[row][j]=0
                            
sln = Solution()
matrix = [[1,2,3,4],[5,0,7,8],[0,10,11,12],[13,14,15,0]]
sln.setZeroes(matrix)
print(matrix)
