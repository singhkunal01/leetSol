class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
    int start , end, n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        if (nums[i + 1] < nums[i]) {
            start = i;
            break;
        }
    }
    if(start==n-1) return 0;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] < nums[i - 1]) {
            end = i;
            break;
        }
    }
    //now we have two probabilities of having start and end
    int least = INT_MAX, greater = INT_MIN;
    for (int i = start; i <= end ; i++) {
        least = min(least, nums[i]);
        greater = max(greater, nums[i]);
    }
    // cout<<least<<" "<<greater<<" "<<start<< " "<<end;
    int i = start , j = end ;
    while (i - 1 >= 0 and nums[i - 1] > least) i--;
    while (j + 1 < n and nums[j + 1] < greater) j++;
    return j - i + 1;
    }
};
