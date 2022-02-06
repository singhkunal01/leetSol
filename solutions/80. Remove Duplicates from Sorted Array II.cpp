class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<3) return nums.size();
        int j = 0;
        for(int i :nums){
            if(j==0 or j==1 or nums[j-2]!=i){
               nums[j]=i;
                j++;
            }
        }
        return j;
    }
};
