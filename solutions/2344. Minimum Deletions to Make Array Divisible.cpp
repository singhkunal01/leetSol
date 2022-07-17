class Solution {
    int giveGcd(int a, int b) {
        if (a == 0) return b;
        return giveGcd(b % a, a);
    }
public:
    int minOperations(vector<int>& nums, vector<int>& nd) {
        int finalGcd = nd[0];
        for (int i = 1; i < nd.size(); i++) {
            finalGcd = giveGcd(finalGcd, nd[i]);
            finalGcd == 1 ? 1 : finalGcd;
        }
        map<int, int> mp;
        for (int i : nums)mp[i]++;
        int ans = 0;
        sort(nums.begin(),nums.end());
        if (finalGcd % nums[0] == 0) return ans;
​
        for (auto i : mp) {
            if (finalGcd % i.first == 0) break;
            if (i.first > finalGcd) break;
​
            ans += i.second;
        }
        return ans == 0 ? -1 : ans;
    }
};
​
