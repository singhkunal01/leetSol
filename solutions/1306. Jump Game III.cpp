class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if (start < 0 or start >= size(arr)) return false;
    if (arr[start] == 0) return true;
    if (arr[start] < 0) return false;//the index is previously visited
    arr[start] *= -1;
    // print(arr)
    return canReach(arr, start + arr[start]) or canReach(arr, start - arr[start]);
    }
};
