class Solution {
public:
    bool canJump(vector<int>& nums) {
    int n = nums.size();
    /* Case 1. If first element of the list is 0 then it never reached
       at end , since if it cannot take a jump from the starting point
       then it is cleared then it cannot be run further and hence return false.*/
    int jumps = 0, distanceCovered = 0;
    for (int x = 0; x < n; x++) {
        jumps = x + nums[x];
        if (x > distanceCovered) return false;
        distanceCovered = max(distanceCovered, jumps);
    }
    return true;
        
    }
        // for better understanding refer : https://youtu.be/muDPTDrpS28
};
