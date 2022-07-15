class Solution {
    void findIslandsDfs(vector<vector<char>>& grid, int i, int j, vector<vector<int>>&dir, int n, int m) {
        if (i < 0 or j < 0 or i>n - 1 or j > m - 1 or grid[i][j] != '1') return;//these are the boundaries
        grid[i][j] = '2';//mark as visited
        for (auto allDir : dir) {
            int newI = i + allDir[0];//exploring each direcion in x
            int newJ = j + allDir[1];//exploring each direction in y
            findIslandsDfs(grid, newI, newJ, dir, n, m);
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> dir{{1, 0}, {0, 1}, { -1, 0}, {0, -1}};
        int islandsCount = 0, n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1') {
                    findIslandsDfs(grid, i, j, dir, n, m);
                    islandsCount++;
                }
            }
        }
        return islandsCount;
    }
};
