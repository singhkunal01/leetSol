class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==2) return max_element(nums.begin(),nums.end())-nums.begin();
        for(int i = 1;i<nums.size()-1;i++){
            if(nums[i-1]<nums[i] and nums[i]>nums[i+1])
                return i;
        }
        return max_element(nums.begin(),nums.end())-nums.begin();;
    }
};
