class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     int n = size(nums);
        vector<int> res(n);
        int i = 0,j = n-1;
        for(int l = n-1;l>=0;l--){
            if(abs(nums[i])>abs(nums[j])) 
                res[l]=nums[i]*nums[i++];
            else res[l]=nums[j]*nums[j--];
        }
        return res;
    }
};
