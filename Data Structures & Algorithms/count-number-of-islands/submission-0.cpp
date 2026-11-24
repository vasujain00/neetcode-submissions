class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        int rowSize = grid.size();
        int colSize = grid[0].size();
        
        vector<vector<bool>> visited(rowSize, vector<bool>(colSize, false));

        for(int i = 0;i<rowSize;i++) {
            for(int j=0;j<colSize;j++) {
                if(grid[i][j]!= '0' && !visited[i][j]) {
                    dfsTraversal(i,j,grid,visited,rowSize, colSize);
                    islands++;
                }
            }
        }

        return islands;
    }
    

void dfsTraversal(int i, int j,vector<vector<char>>& grid, vector<vector<bool>>& visited, int row, int col) {

        if(i < 0 || j < 0 || i >= row || j >= col || visited[i][j] == true || grid[i][j] == '0') {
            return;
        }
        visited[i][j] = true;
        dfsTraversal(i+1,j, grid, visited, row, col);
        dfsTraversal(i-1, j, grid, visited, row, col);
        dfsTraversal(i, j+1, grid, visited, row, col);
        dfsTraversal(i, j-1, grid, visited, row, col);
        
    }
};
