class Solution {
    private:
    int dfs(vector<vector<int>>& mat,int m,int n,int i,int j,vector<vector<int>> &dir,vector<vector<int>> &memo){
        if(memo[i][j]>0) return memo[i][j];
        int mx = 0;
        for(auto &d:dir){
            int x = i+d[0],y = j+d[1];
            if(x>=0 and y>=0 and x<m and y<n and mat[x][y]>mat[i][j]){
                mx = max(mx,dfs(mat,m,n,x,y,dir,memo));
            }
        }
        memo[i][j]=mx+1;
        return mx+1;
    }
public:
    int longestIncreasingPath(vector<vector<int>>& mat) {
        if(mat.size()==0) return 0;
        int longest =0 ;
        int n = size(mat),m = size(mat[0]);
        vector<vector<int>> dir{{0,1},{1,0},{0,-1},{-1,0}},memo(n,vector<int> (m));
        for(int i = 0;i<n;i++){
            for(int j =0;j<m;j++){
                int path = dfs(mat,n,m,i,j,dir,memo);
                longest = max(longest,path);
            }
        }
        return longest;
    }
};
