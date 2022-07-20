class Solution {
    int findMaxAmongAll(int i,vector<int> &a,vector<int> &dp){
    //base case 
    if(i==0) return a[i];
    if(i<0) return 0;
    if(dp[i]!=-1) return dp[i];
    int pick = a[i]+findMaxAmongAll(i-2,a,dp);
    int notPick = 0+findMaxAmongAll(i-1,a,dp);
    return dp[i]=max(pick,notPick);
}
public:
    int rob(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n+1,-1);
    return findMaxAmongAll(n-1,nums,dp);
    }
};