class Solution {
private:
int dfsCall(vector<vector<int>> &grid, int x , int y, vector<vector<int>> &memo) {
    if (x >= 0 and y >= 0 and grid[x][y]) return 0;//since this is the dead cell we can not move forward
    if (x < 0 or y < 0 ) return 0;
    if (x == 0 and y == 0) return 1;
    if (memo[x][y]!=-1) return memo[x][y];
    int up = dfsCall(grid, x - 1, y, memo);
    int left = dfsCall(grid, x , y - 1, memo);
    return memo[x][y] = up + left;
}
    public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    if (obstacleGrid[0][0] == 1) return 0;
    int n = obstacleGrid.size(), m = obstacleGrid[0].size();
    vector<vector<int>> memo(n, vector<int>(m, -1));
    return dfsCall(obstacleGrid, n - 1, m - 1, memo);
    }
};
