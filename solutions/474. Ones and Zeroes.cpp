class Solution {
    vector<int> countAll01(string &s) {
        vector<int> count(2, 0);
        for (char ch : s) {
            count[ch - '0']++;
        }
        return count;
    }
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>>dp(m+1,vector<int> (n+1,0));
        for(string s:strs){
            vector<int> count = countAll01(s);
            for(int zero = m;zero>=count[0];zero--){
                for(int ones = n ;ones>=count[1];ones--){
                    dp[zero][ones]=max(dp[zero-count[0]][ones-count[1]]+1,dp[zero][ones]);
                }
            }
        }
        return dp[m][n];
    }
};
