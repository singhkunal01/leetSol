class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& nd) {
        int finalGcd = nd[0];
        for (int i = 1; i < nd.size(); i++) 
            finalGcd = gcd(finalGcd, nd[i]);
        sort(nums.begin(),nums.end());
        for (int i =0 ;i<nums.size();i++) {
            if (nums[i]<=finalGcd) {
            if(finalGcd%nums[i]==0) 
                return i;
            }
        }
        return -1;
    }
};
​
