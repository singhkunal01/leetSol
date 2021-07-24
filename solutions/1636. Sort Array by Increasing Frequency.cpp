  bool sortAccToMe(pair<int, int> a, pair<int, int>b){ 
  if (a.second != b.second) 
    return (a.second < b.second); 
  else 
    return (a.first> b.first);
}
class Solution {
public:
​
vector<int> frequencySort(vector<int>& nums) {
vector<int> res;
vector<pair<int,int>> temp;
unordered_map<int,int> hash;
for(auto x:nums) hash[x]++;
for(auto k:hash) temp.push_back(k);
sort(temp.begin(),temp.end(),sortAccToMe);
for(auto v : temp) {
  for(int i=0;i<v.second;i++) {
      res.push_back(v.first);
  }
}
return res;
    }
};
