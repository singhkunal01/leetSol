class Solution {
public:
    vector<int> getMaximumXor(vector<int>& v, int maxBits) {
       int n=v.size(),ans=0; 
        vector<int>res(n, 0);
    // int ans = accumulate(v.begin(), v.end(), 0, bit_xor<int>());
        for(auto val:v) ans^=val;
    ans ^= (1 << maxBits) - 1;
    res[0] = ans;
    for (int i = 1; i < n; ++i)
    {
        res[i] = ans ^= v[n - i];
    }
        return res;
    }
};
