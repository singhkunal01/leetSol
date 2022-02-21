class Solution {
    void helper(int i,vector<int> &com,vector<vector<int>> &res,int n,int k){
        
        if(com.size()== k){
            res.push_back(com);
            // com.clear();
            return;
        }
        for(int j = i;j<=n;j++){
        com.push_back(j);
        helper(j+1,com,res,n,k);
        com.pop_back();
        }
​
    }
public:
    vector<vector<int>> combine(int n, int k) {
    vector<int> com;vector<vector<int>> res;
        helper(1,com,res,n,k);
        return res;
    }
};
