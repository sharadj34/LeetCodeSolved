class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
    int rows = grid.size(), cols = grid[0].size();
    vector<vector<int>> moveCount(rows, vector<int>(cols, 0));
    int maxMoves = 0;

    for (int j = cols - 2; j >= 0; --j) {
        for (int i = 0; i < rows; ++i) {
            if (i > 0 && grid[i][j] < grid[i - 1][j + 1]) {
                moveCount[i][j] = max(moveCount[i][j], moveCount[i - 1][j + 1] + 1);
            }
            if (grid[i][j] < grid[i][j + 1]) {
                moveCount[i][j] = max(moveCount[i][j], moveCount[i][j + 1] + 1);
            }
            if (i < rows - 1 && grid[i][j] < grid[i + 1][j + 1]) {
                moveCount[i][j] = max(moveCount[i][j], moveCount[i + 1][j + 1] + 1);
            }
        }
    }

    for (int i = 0; i < rows; ++i) {
        maxMoves = max(maxMoves, moveCount[i][0]);
    }
    return maxMoves;
    }
};