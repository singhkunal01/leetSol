class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    set<pair<int,int>> s;
        
        for(int i = 0;i<mat.size();i++){
            int ct1 = count(mat[i].begin(),mat[i].end(),1);
            s.insert({ct1,i});
        }
        vector<int> res;
        for(auto i:s){
            //if k == 0 then no need to check simply break;
            if(k==0) break;
            res.push_back(i.second);
            k--;
        }
        return res;
    }
};
