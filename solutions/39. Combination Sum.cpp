class Solution {
    private:
    void rec_func(int target,int i,vector<int> &temp,vector<int>& candidates,vector<vector<int>> &res){
        if(i==candidates.size() ){
            if(target==0){
            res.push_back(temp);
            }
            return;
        }
        if(candidates[i]<=target){
        temp.push_back(candidates[i]);
        rec_func(target-candidates[i],i,temp,candidates,res);
        temp.pop_back();
        }
        rec_func(target,i+1,temp,candidates,res);
​
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>>res;
        rec_func(target,0,temp,candidates,res);
        return res;
    }
};
