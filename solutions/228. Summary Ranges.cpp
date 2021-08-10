class Solution {
public:
  vector<string> summaryRanges(vector<int> &nums)
    {
        if (size(nums) == 0)
            return {};
        vector<string> res;
        for (int i = 0; i < size(nums);)
        {
            int j = i, k = i;
            while (k + 1 < size(nums) && nums[k + 1] == nums[k] + 1)
                k++;
            if (k > j)
                res.push_back(to_string(nums[j]) + "->" + to_string(nums[k]));
            else
                res.push_back(to_string(nums[j]));
            i = k + 1;
        }
        return res;
    }
};
