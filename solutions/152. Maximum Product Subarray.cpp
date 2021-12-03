class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int mini = nums[0],maxi = nums[0],n = nums.size(),res=nums[0];
        if(n==1) return nums[0];
        for(int i = 1;i<n;i++){
            if(nums[i]<0) swap(maxi,mini);
            maxi = max(nums[i],maxi*nums[i]);
            mini = min(nums[i],mini*nums[i]);
            res = max(res,maxi);
        }
        return res;
    }
};
