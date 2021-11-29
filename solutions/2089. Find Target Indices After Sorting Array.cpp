class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       vector<int> res;
  /*       sort(nums.begin(),nums.end());
    for(int i = 0;i<nums.size();i++){
        if(nums[i]==target) 
            res.push_back(i);
    }
        return res;*/ 
        // TC: O(nlogn)
        
        //IMPROVED ONE - using counting sort
    int countTarget = 0,countLessThanTarget = 0;
        for(int x:nums){
            if(x==target) countTarget++;
            if(x<target) countLessThanTarget++;
        }
       while(countTarget--) res.push_back(countLessThanTarget++);
    return res;
        //O(N)
    }
};
