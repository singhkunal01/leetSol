class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefix(n + 1, 1), suffix(n + 1, 1);
    //save the prefix multiplication
    for (int i = 1; i <= n; i++) prefix[i] = prefix[i - 1] * nums[i - 1];
        //save the suffix multiplication
    for (int i = n - 1; i >= 0; i--) suffix[i] = suffix[i + 1] * nums[i];
    // print(mp(prefix, suffix))
    for (int i = 0; i < n; i++) {
        suffix[i] = suffix[i + 1] * prefix[i];
    }
    suffix.erase(suffix.end() - 1);
    return suffix;
    }
};
