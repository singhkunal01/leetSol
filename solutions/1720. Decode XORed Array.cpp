class Solution {
public:
    vector<int> decode(vector<int>& a, int first) {
        vector<int> res(size(a)+1);
res[0]=first;
for(int i=0;i<size(a);i++){
  res[i+1]=res[i]^a[i];
}
return res;
    }
};
