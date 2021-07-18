class Solution {
public:
    int firstUniqChar(string s) {
        //MY own Code
        unordered_map<char,int> v;
for(auto x:s) v[x]++;
  for(int i=0;i<size(s);i++){
    if(v[s[i]]==1)
      return i;
  }
return -1;
    }
};
