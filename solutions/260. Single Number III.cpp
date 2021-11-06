class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
            if(nums.size() <= 2) return nums;
    map<int, int> freq;
    vector<int> res;
    for(auto x : nums) freq[x]++;
    for(auto values : freq)
        if(values.second == 1)
            res.push_back(values.first);
    return res;
        
​
    }
};
