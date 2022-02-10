class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = size(nums),ct = 0,sum = 0;
        map<int,int>mpp;
        for(int i = 0;i<n;i++){
            sum+=nums[i];
            if(mpp[sum-k]) ct+=mpp[sum-k];
            if(sum==k) ct++;
             if(mpp[sum]) mpp[sum]++;
            else mpp[sum]=1;
        }
        return ct;
    }
};
