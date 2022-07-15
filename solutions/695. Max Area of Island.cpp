//dfs approach is in the notes check it for better understanding
​
class Solution {
    int findIslandsDfs(vector<vector<int>>& grid, int r, int c) {
        vector<vector<int>> dir{{1, 0}, {0, 1}, { -1, 0}, {0, -1}};
        queue<pair<int,int>> ds;
        ds.push({r,c});
       int islandsCount = 1, n = grid.size(), m = grid[0].size();;
        //mark the current cell as visited by putting water on that cell
        grid[r][c]=0;
        while(!ds.empty()){
            int first = ds.front().first,second = ds.front().second;
            ds.pop();
            //iterate over all 4 directions
            for(auto allDir:dir){
            int newI = first + allDir[0];//exploring each direcion in x
            int newJ = second + allDir[1];//exploring each direction in y
            if (newI >= 0 and newJ >= 0 and newI<=n - 1 and newJ <= m - 1 and grid[newI][newJ] ) {//these are the boundaries
                grid[newI][newJ]=0;
                islandsCount+=1;
                ds.push({newI,newJ});
            }
            }
        }
    return islandsCount;
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int islandsCount = 0, n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j]) {
                islandsCount = max(islandsCount, findIslandsDfs(grid, i, j));
                }
            }
        }
        return islandsCount;
    }
};
