class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
    int n = nums.size();
    /*↔*/
        int rightOnes = 0;
        vector<int> res;
        for(auto it:nums) rightOnes+=it;
        int mx = rightOnes,left0s = 0;
        for(int i = 0;i<=n;i++){
            //if the summation is greater than the max 
             if(left0s + rightOnes > mx){
                 mx = left0s + rightOnes;
                 res.clear();
             }
            if(left0s + rightOnes == mx) res.push_back(i);
            if(i<n){
                rightOnes-=nums[i];
                left0s+=(nums[i]==0);
            }
        }
        return res;
    }
};
