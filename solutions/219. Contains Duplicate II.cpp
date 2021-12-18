class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
//if the key is not present then add that key with the index as its value
        if (mpp.count(nums[i]) == 0) mpp[nums[i]] = i;
        /*suppose if the key is present that means it is the duplicate of the number which is already inserted with different value
        and hence find the length of that window means where the number is located and where we found the duplicate of that number.*/
        else if (i - mpp[nums[i]] <= k) return true;
        else mpp[nums[i]] = i;//it is used for getting the window having the longest length that means if always saves the value which is farthest.
    }
    return false;
    }
};
