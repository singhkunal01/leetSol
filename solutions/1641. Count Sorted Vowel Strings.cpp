class Solution { 
    int doSum(vector<int> &dp){
        return accumulate(dp.begin(),dp.end(),0);
    }
public:
    int countVowelStrings(int n) {
         vector<int> dp(5,1);
        while(--n){
          for(int i = 3;i>=0;i--){
               dp[i]+=dp[i+1];
              }
         } 
        return doSum(dp);
    }
};
