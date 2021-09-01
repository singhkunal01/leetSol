class Solution {
public:
    int arrayNesting(vector<int>& nums) {
         int lengthOfCycle, longestSet = 0;
 for(int x : nums) {
     if(x==-1) continue;
     lengthOfCycle = 0;
     while(nums[x]!=-1) {
         lengthOfCycle++;
         int lastValueOfSameCycle = x;
         x = nums[x];
         nums[lastValueOfSameCycle] = -1;
     }
     longestSet = max(longestSet, lengthOfCycle);
 }
 return longestSet;
    }
};
