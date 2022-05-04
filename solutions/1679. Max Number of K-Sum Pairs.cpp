class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    int ct = 0;
    for (int i = 0; i < nums.size(); i++) {
        cout<<nums[i]<<" ";
        int findNum = k - nums[i];
        if (mp.find(findNum) != mp.end() and mp[findNum] != 0 ) {
            ct++;
            mp[findNum]--;
            continue;
        }
        mp[nums[i]]++;
    } 
        cout<<nums.size();
    return ct;
    }
};
