class Solution {
    private:
    void generate(vector<int> &perm,vector<int> &nums,vector<vector<int>> &res,vector<int> vis){
        if(perm.size()==nums.size()){
            res.push_back(perm);
            return;
        }
        for(int j = 0;j<nums.size();j++){
        if(!vis[j]){
        perm.push_back(nums[j]);
        vis[j]=1;
        generate(perm,nums,res,vis);
        perm.pop_back();
        vis[j]=0;
           }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>> res;
      vector<int> ds;
      vector<int> vis(nums.size(),0);
      generate(ds,nums,res,vis);
      return res;
    }
};
