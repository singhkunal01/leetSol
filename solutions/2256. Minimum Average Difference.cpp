class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
    int n = nums.size();
    vector<long long> pre(n, 0), suff(n + 1 , 0);
    pre[0] = nums[0], suff[n - 1] = nums[n - 1];
    for (int i = 1; i < n; i++) pre[i] = pre[i - 1] + nums[i];
    for (int i = n - 1; i >= 0; i--) suff[i] = suff[i + 1] + nums[i];
    // print(mp(pre, suff))
    vector<long long > res;
    for (int i = 0; i < n-1; i++) {
        long  long avg = (long long)abs((pre[i] / (i + 1)) - (suff[i + 1] / (n - i - 1)));
        res.push_back(avg);
        // print(res)
    }
    res.push_back(pre[n - 1] / n);
    return min_element(res.begin(), res.end()) - res.begin();
    }
};
