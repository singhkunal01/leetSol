const int mod = 1e9+7;
class Solution {
    int helper(int m,int n,int maxMove,int i,int j,vector<vector<vector<int>>> &memo){
         if(i<0 or i>=m or j<0 or j>=n) return 1;
        if(maxMove<=0) return 0;
        //memoisation
        if(memo[i][j][maxMove]!=-1)return memo[i][j][maxMove];
        long res =0;
        res+=helper(m,n,maxMove-1,i+1,j,memo);
        res+=helper(m,n,maxMove-1,i-1,j,memo);
        res+=helper(m,n,maxMove-1,i,j+1,memo);
        res+=helper(m,n,maxMove-1,i,j-1,memo);
        return memo[i][j][maxMove]=res%mod;
    }
public:
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        //using dfs
        //in all questions mostly we have to return 0 when we are out of the boundary but in this ques we have to take +1 when we go outside.
        //if the ball is out of boundary then return 1;
    vector<vector<vector<int>>> memo(51,vector<vector<int>> (51,vector<int> (51,-1)));
       return helper(m,n,maxMove,startRow,startColumn,memo)%mod;
    }
};
