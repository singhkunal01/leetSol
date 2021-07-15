class Solution {
public:
int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
int rows=size(grid);
int cols=size(grid[0]);
int sum=0;
vector<int> rowMax(rows),colMax(rows);
for (int i = 0; i < rows; ++i){
  for (int j = 0; j < cols; ++j) {
       rowMax[i] = max(rowMax[i], grid[i][j]);
      colMax[j] = max(colMax[j], grid[i][j]);
   }
}
for (int i = 0; i < rows; ++i){
  for (int j = 0; j < cols; ++j) {
  sum+=min(rowMax[i],colMax[j])-grid[i][j];
}
  }
return sum;
    }
};
