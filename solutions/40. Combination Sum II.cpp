class Solution {
        private:
    void rec_func(int target,int i,vector<int> &temp,
                  vector<int>& candidates,vector<vector<int>> &st){
        if(target == 0 ){
            st.push_back(temp);
            return;
        }
        for(int j = i;j<candidates.size();j++){
            if(j>i and candidates[j]==candidates[j-1])continue;
            if(candidates[j]>target) break;
        temp.push_back(candidates[j]);
        rec_func(target-candidates[j],j+1,temp,candidates,st);
        temp.pop_back();
        }
​
    }
public: 
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
           vector<int> temp;
        vector<vector<int>>res;
        sort(candidates.begin(),candidates.end());
        rec_func(target,0,temp,candidates,res);
        return res;
        
    }
};
