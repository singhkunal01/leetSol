class Solution {
    //where my sorting approach fails check notes
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n  = size(nums),mxRes = 1,ct=1;
        if(n<=1) return n;
        for(int i=1;i<n;i++){
                if(nums[i]!=nums[i-1]){
            if(nums[i]-nums[i-1]==1){
                ct++;
            }
            else{
                mxRes = max(mxRes,ct);
                ct = 1;
            }
        }
            }
        mxRes = max(mxRes,ct);
        return mxRes;
    }
};
