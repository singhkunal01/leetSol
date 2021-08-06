class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /*
        === MENTOS ZINDAGI====
        int idx =  lower_bound(nums.begin(),nums.end(),target)-nums.begin();
      return idx; 
      */
        //===AAM ZINDAGI===
        int l=0,h=size(nums)-1;
        while(l<=h){
            int mid = l +((h-l)>>1);
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                l = mid+1;
            else 
                h = mid -1 ;
        }
        return l;
    }
};
