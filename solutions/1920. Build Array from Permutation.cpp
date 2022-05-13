class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        //this one is the simple solution .. using extra container which can be count in the space complexity 
        // vector<int> res(n);
        // for(int i = 0; i< n; i++){
        //     res[i]=nums[nums[i]];
        // }
        // return res;
        
        
        
    /* -> on the other hand if we saw the follow up question then it means we haven't use any type of extra space to place these values so we have to do in INPLACE 
        -> in this the intution to carry the sum of two elements at a single index like keeping track of results we see that -
        given ,
        arr = [5,0,1,2,3,4] and the result of this array is
        arr = [4,5,0,1,2,3]
        so what we carry this like this, n=6
        arr= [0,8,13,29,33,22]
        */
        for(int i = 0;i<nums.size();i++){
            nums[i]+=n*(nums[nums[i]]%n);
        }
        for(int i = 0;i<nums.size();i++){
            // nums[i]/=n;
​
        }
        return nums;
    }
};
