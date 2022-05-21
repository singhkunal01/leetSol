class Solution {
    int helper(vector<int> &coins,int i,int amount,vector<vector<int>> &dp){
        //as question says that we can take a number any number of times 
        /* suppose if the size is 1 and coins[0]={2} where amount = 16 then we can take 2 ,8times whereas if coins[0]=3 and amount = 16 then we can't*/
        if(amount == 0) return 0;
        if(i < 0 || amount < 0) return INT_MAX-1;
        if(dp[i][amount]!= -1) return dp[i][amount];
        int one = helper(coins,i-1,amount,dp);
        int two = 1+helper(coins,i,amount-coins[i],dp);
        dp[i][amount] = min(one,two);
        return dp[i][amount];
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
       return helper(coins,n-1,amount,dp)<INT_MAX-1?helper(coins,n-1,amount,dp):-1;
    }
};
