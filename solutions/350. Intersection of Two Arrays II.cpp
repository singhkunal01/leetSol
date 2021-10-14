class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
vector<int> res;
unordered_map<int,int> st;
for(int elem:nums1) st[elem]++;
for(int x : nums2) {
    if(st[x]>0) {
        st[x]--;
        res.push_back(x);
    }
}
return res;
    }
};
