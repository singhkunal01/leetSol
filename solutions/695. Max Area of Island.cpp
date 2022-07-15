class Solution {
    void findIslandsDfs(vector<vector<int>>& grid, int i, int j, vector<vector<int>>&dir, int n, int m,int &sum) {
        if (i < 0 or j < 0 or i>n - 1 or j > m - 1 or grid[i][j] != 1) return;//these are the boundaries
        sum+=1;
        grid[i][j] = 2;//mark as visited
        for (auto allDir : dir) {
            int newI = i + allDir[0];//exploring each direcion in x
            int newJ = j + allDir[1];//exploring each direction in y
            findIslandsDfs(grid, newI, newJ, dir, n, m,sum);
        }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<int>> dir{{1, 0}, {0, 1}, { -1, 0}, {0, -1}};
        int islandsCount = 0, n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int sum = 0;
                if (grid[i][j] == 1) {
                findIslandsDfs(grid, i, j, dir, n, m,sum);
                islandsCount = max(islandsCount,sum);
                }
            }
        }
        return islandsCount;
    }
};
