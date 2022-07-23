class Solution {
    private:
    int maximumNonAdjacentSumSpaceOpt(vector<int> &nums) {
    int n = nums.size();
    int prev = nums[0], prev2 = 0, currI  = 0;
    for (int i = 1 ; i < n; i++) {
        int pick = nums[i];
        if (i > 1) pick += prev2;
        int notPick = prev;
        currI = max(pick, notPick);
        prev2 = prev;
        prev = currI;
    }
    return prev;
}
public:
    int rob(vector<int>& nums) {
    int n  = nums.size();
    if (n == 1) return nums[0];
    vector<int> withoutFirst, withoutLast;
    for (int i = 0; i < n; i++) {
        if (i != 0) withoutFirst.push_back(nums[i]);
        if (i != n - 1) withoutLast.push_back(nums[i]);
    }
    int ansWithoutFirst = maximumNonAdjacentSumSpaceOpt(withoutFirst);
    int ansWithoutLast = maximumNonAdjacentSumSpaceOpt(withoutLast);
    return max(ansWithoutLast, ansWithoutFirst);    }
};
