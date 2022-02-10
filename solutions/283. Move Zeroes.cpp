class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int k = 0,ct = 0;
        for(int i:nums){
            if(i!=0){
                nums[k++]=i;
            }
            if(i==0) ct++;
        }
        for(int i = k;i<n;i++){
            nums[i]=0;
        }
    }
};
