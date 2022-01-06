class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int even = 0,odd = 1;
   for(int i = 0;i < n ; i++){
      if(nums[i]&1){//number is odd
          ans[odd]=nums[i];
          odd+=2;
          }
       else {
           ans[even]=nums[i];
           even+=2;
       }
   }
  return ans;
​
    }
};
