​
class Solution {
unordered_map<int, vector<int>> dp;
    public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<int> ans;
        for(int i = 0; i < size(nums); i++) {
            auto res = helper(nums, i);
            if(size(res) > size(ans)) ans = res;
        }
        return ans;
    }
    vector<int> helper(vector<int>& nums, int start) {
        if(start >= size(nums)) return {};
        if(dp.count(start)) return dp[start];
        for(int next = start+1; next < size(nums); next++) {
            if(nums[next] % nums[start]) continue;
            auto res = helper(nums, next);
            if(size(res) >= size(dp[start])) dp[start] = res;
        }
        dp[start].push_back(nums[start]);
        return dp[start];
    }
};
