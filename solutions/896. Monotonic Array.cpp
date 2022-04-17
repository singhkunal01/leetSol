class Solution {
public:
bool isMonotonic(vector<int>& nums) {
    int n = nums.size();
    bool isIncreasing  = true, isDecreasing = true;
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] < nums[i + 1])//it means that array is increasing i.e., decrease will become false
            isDecreasing = false;
        if (nums[i] > nums[i + 1]) //it means that array is decreasing i.e., increase will become false
            isIncreasing =  false;
    }
    return (isIncreasing or isDecreasing);
    }
};
