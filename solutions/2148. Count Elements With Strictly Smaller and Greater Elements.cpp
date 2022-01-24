class Solution {
public:
    int countElements(vector<int>& nums) {
    map<int, int> mpp;
    int n = nums.size();
    if (n == 1 ) return 0;
    for (int v : nums) mpp[v]++;
    if (mpp.size() == n) return n - 2;
    if (mpp.size() == 1) return 0;
    int ans = 0;
    auto fi = mpp.begin();
    fi++;
    auto se = mpp.end();
    --se;
    for (auto it =  fi; it != se; it++) {
        ans += it->second;
    }
    return ans;
    }
};
