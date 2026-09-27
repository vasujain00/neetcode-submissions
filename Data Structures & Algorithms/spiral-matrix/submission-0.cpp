class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
           int m = matrix.size(), n = matrix[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false));
    vector<int> result;

    // Directions: right, down, left, up
    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};
    int dir = 0;  // start going right
    int row = 0, col = 0;

    for (int i = 0; i < m * n; i++) {
        result.push_back(matrix[row][col]);
        visited[row][col] = true;

        // Look ahead in current direction
        int nextRow = row + dr[dir];
        int nextCol = col + dc[dir];

        // If stuck (out of bounds or visited) → turn right
        if (nextRow < 0 || nextRow >= m || nextCol < 0 || nextCol >= n
                || visited[nextRow][nextCol]) {
            dir = (dir + 1) % 4;
            nextRow = row + dr[dir];
            nextCol = col + dc[dir];
        }

        row = nextRow;
        col = nextCol;
    }

    return result;
   
    }


};
