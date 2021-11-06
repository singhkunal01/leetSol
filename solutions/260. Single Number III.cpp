// APPROACH 1: USING HASH MAP FIND THE FREQUENCY OF EACH NUMBER IF IT IS ONE THEN STORE IT AND THEN RETURN ;

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
        
    }
};

//APPROACH 2: USING BIT MANIPULATION

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    if(nums.size() <= 2) return nums;
    int xored = 0;
    for(auto x : nums)
        xored ^= x;
    int rightMostBit = xored & ~(xored - 1);
    // print(mp(xored,rightMostBit))
    int first = 0,second = 0;
    for(auto x:nums){
        if(x & rightMostBit) first^=x;
        else second^=x;
    }
    return {first,second};
    }
};
