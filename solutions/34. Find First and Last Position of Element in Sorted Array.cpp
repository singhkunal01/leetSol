class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        if (size(nums) <1)
            return res;
        int low = 0, high = size(nums) - 1;
        while (low < high)
        {
            int mid = low + ((high - low) >> 1);
            if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid;
        }
        if(nums[low]!=target)
          return res;
        else res[0]=low;
        high = size(nums)-1; //again place it at the last index of the array
         while (low < high)
        {
            int mid = (low + ((high - low) >> 1))+1;
            if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid;
        }
        res[1]=high;
        return res;
    }
};
