class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans ;
    ans.reserve(n);
//get all even values.
    for (int i = 0; i < n; i += 2) ans.push_back(nums[i]);
    sort(ans.begin(), ans.end());
    for (int i = 0, k = 0; i < n; i += 2, k++) nums[i] = ans[k];
    // now till now we have placed even values at their right position.
// now the time for odd ones
    ans.clear();
    for (int i = 1; i < n; i += 2) ans.push_back(nums[i]);
    sort(ans.begin(), ans.end(), greater<int>());
    for (int i = 1, k = 0; i < n; i += 2, k++) nums[i] = ans[k];
    return nums;
    }
};
