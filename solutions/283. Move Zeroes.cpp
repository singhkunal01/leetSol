class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int numberNotZero = 0;
    //first place all the non-zeroes values in front of the array(nums);
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[numberNotZero] = nums[i];
            numberNotZero++;
        }
    }
  /* for first test case till here what we get is : 1 3 12 3 12 now we have to place zeroes after
till the last non-zero element we have non-zeroes now target is to placee the zeroes after that */
    for (int i = numberNotZero; i < nums.size(); i++) nums[i]=0;
    }
};
