class Solution {
public:
    bool divideArray(vector<int>& nums) {
    unordered_map<int, int> mp;
        cout<<nums.size()<<endl;
    for (int x : nums) {mp[x]++; cout<<x<<" ";}
    for (int i : nums) {
        if (mp[i] % 2 != 0) return false;
    }
    return true;
    }
};
