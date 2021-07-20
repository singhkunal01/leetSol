class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //solution 1 by sorting
     /*   vector<int> res(size(nums));
        for(int i = 0;i<size(nums);i++){
            res[i]=nums[i]*nums[i];
        }
        sort(res.begin(),res.end());
        return res;
    */
        vector<int> res(size(nums));
int r=size(nums)-1,l=0;
for(int i = size(nums)-1;i>=0;i--){
   if(abs(nums[r]>abs(nums[l]))) res[i]=nums[r]*nums[r--];
   else res[i]=nums[l]*nums[l++];
}
return res;
        /* 
        Approach is simple we have to just convert all the negative values into +ve and with the help of two pointers we have to check whichever the element is smaller l or r and insert them from back in the resultant array;
        
        */
    }
};
