class Solution {
    int helper(int i , vector<int> &cost,vector<int> &memo){
        if(i == cost.size()-1 or i ==cost.size()-2){
            return cost[i];
        }
    if(memo[i]!=-1) return memo[i];
        int from0 = helper(i+1,cost,memo);
        int from1 = helper(i+2,cost,memo);
        memo[i]=min(from0,from1)+cost[i];
        return memo[i];
    
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        //edge cases
        int n = cost.size();
        if(n==2) return min(cost[0],cost[1]);
        vector<int> memo(1001,-1);
        int from0 = helper(0,cost,memo);
        int from1 = helper(1,cost,memo);
        return min(from0,from1);
    }
};
