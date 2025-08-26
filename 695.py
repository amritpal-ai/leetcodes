class Solution(object):
    def maxAreaOfIsland(self, grid):
       if not grid:
           return 0
       rows,cols= len(grid),len(grid[0])
       island = 0
       def dfs(i,j):
           if i<0 or j<0 or i>=rows or j>=cols or grid[i][j]== 0:
               return 0
            
           grid[i][j]= 0
           count = 1
           count += dfs(i+1,j)
           count += dfs(i-1,j)
           count += dfs(i,j+1)
           count += dfs(i,j-1)
           return count
       for i in range(rows):
           for j in range (cols):
               if grid[i][j]== 1:
                   count = dfs (i,j)
                   island = max(island,count)
                    

       return island    

        