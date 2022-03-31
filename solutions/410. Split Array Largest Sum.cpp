class Solution {
    int partition(vector<int> &nums,int mid){
        int sum=0,ct = 1;
        for(int i = 0;i<nums.size();i++){
            if(sum+nums[i]<=mid) sum+=nums[i];
            else ct++,sum = nums[i];
        }
        return ct;
    }
public:
    int splitArray(vector<int>& nums, int m) {
       //at max m can be equal to 50. 
        int low = 0,high = 0 , n  = nums.size(),ans = 0;
        for(int i:nums) low = max(i,low),high+=i;
        while(low<=high){
            int mid = (low+high)>>1;
            int parts = partition(nums,mid);
            if(parts<=m){
                high = mid - 1,ans = mid;
            }
            else low = mid + 1;
        }
        return ans;
    }
};
