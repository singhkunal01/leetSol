class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int id = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            if(i%10==nums[i]) {
                id = min(id,i);
            }
        }
        return id!=INT_MAX?id:-1;
    }
};
