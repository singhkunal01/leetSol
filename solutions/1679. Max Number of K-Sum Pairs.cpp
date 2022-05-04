class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    int ct = 0;
    for (int &i:nums) {
        int findNum = k - i;
        if (mp[findNum]) {
            ct++;
            mp[findNum]--;
            continue;
        }
        mp[i]++;
    } 
    return ct;
    }
};
