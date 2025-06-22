'''
You are given an m x n grid where each cell can have one of three values:

0 representing an empty cell,
1 representing a fresh orange, or
2 representing a rotten orange.
Every minute, any fresh orange that is 4-directionally adjacent to a rotten orange becomes rotten.

Return the minimum number of minutes that must elapse until no cell has a fresh orange. If this is impossible, return -1.

Input: grid = [[2,1,1],[1,1,0],[0,1,1]]
Output: 4
Example 2:

Input: grid = [[2,1,1],[0,1,1],[1,0,1]]
Output: -1
Explanation: The orange in the bottom left corner (row 2, column 0) is never rotten, because rotting only happens 4-directionally.
Example 3:

Input: grid = [[0,2]]
Output: 0
Explanation: Since there are already no fresh oranges at minute 0, the answer is just 0.
'''
from typing import List

class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        q = []
        visited = set()
        fresh = 0
        for i, colums in enumerate(grid):
            for j, item in enumerate(colums):
                if item == 2:
                    q.append((0, i, j)) 
                elif item == 1:
                    fresh += 1
        minutes = 0
        moves = [(-1, 0), (1, 0), (0, -1), (0, 1)]
        while q:
            minutes, posX, posY = q.pop(0)
            # print(posX, posY)
            for move in moves:
                dx, dy = move
                nposX = posX+dx
                nposY= posY+dy
                if (nposX<0 or nposX>=len(grid) 
                    or nposY<0 or nposY>=len(grid[0]) ):
                    continue
                if (nposX, nposY) in visited:
                    continue 
                print((nposX, nposY))
                visited.add((nposX, nposY))
                if grid[nposX][nposY] == 1:
                    grid[nposX][nposY] = 2
                    q.append((minutes+1, nposX, nposY))
                    fresh-=1

        return minutes if fresh==0 else -1
obj = Solution()
grid = [[2,1,1],[1,1,0],[0,1,1]]
print(obj.orangesRotting(grid))
