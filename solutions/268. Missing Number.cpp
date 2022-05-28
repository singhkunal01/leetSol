class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size();
        int it = 0;
        for(int &i:nums){
            ans^=i;
            // cout<<ans<<" , "<<i<<" , ";
            ans^=it;
            it++;
            // cout<<ans<<" , "<<it<<endl;
        }
        return ans;
    }
};
