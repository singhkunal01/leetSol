class Solution {
    void helper(int id,vector<int> &st,vector<int> &a,vector<vector<int>> &res){
    res.push_back(st);
    for(int i = id;i<a.size();i++){
        if(i!=id and a[i]==a[i-1]) continue;
        st.push_back(a[i]);
        helper(i+1,st,a,res); //call for pick the element (selection of that value)
        st.pop_back();
      }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        //for avoiding the duplicates we can use vectos of set inside the resultant vector and before returning the answer again convert it into vector of vector..
        vector<vector<int>> res;
        vector<int> v;
        sort(nums.begin(),nums.end());
        helper(0,v,nums,res);
        return res;
    }
};
