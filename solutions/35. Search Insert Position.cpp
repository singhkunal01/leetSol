class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    int i = 0, j = n - 1, mid;
    if (target < nums[0]) return 0;
    else if (target > nums[n - 1]) return n;
    else {
        while (i <= j) {
            mid = i + ((j - i) >> 1);
            if (nums[mid] < target) i = mid + 1;
            else if (nums[mid] > target) j = mid - 1;
            else return mid;
        }
    }
    return i;
    }
};
