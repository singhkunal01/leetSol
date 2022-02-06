class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
    int cnt[3] = {0, 0, 0};
    int n = nums.size();
    vector<int>  res(n);
    for (int v : nums) { //this will count all numbers lesser than the pivot,same as the pivot as well as greater than the pivot.
        if (v < pivot) cnt[0]++;
        else if (v == pivot) cnt[1]++;
        else cnt[2]++;
    }
    // cout << "Frequency Array: " << cnt[0] << sp << cnt[1] << sp << cnt[2] << endl;
    int lower = 0, same = cnt[0], higher = cnt[0] + cnt[1];
    for (int i : nums) {
        if (i < pivot) res[lower++] = i;
        else if (i == pivot) res[same++] = i;
        else res[higher++] = i;
    }
    return res;
    }
};
