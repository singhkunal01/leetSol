class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
  if(size(strs)==0) return res;
     unordered_map<string,vector<string>> map;
for (auto &x:strs) {
  string z = x;
sort(x.begin(),x.end());
map[x].push_back(z);
}
for(auto &ans:map){
res.push_back(ans.second);
}
return res;
    }
};
