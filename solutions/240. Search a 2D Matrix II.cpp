class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m = mat.size();
        int n = mat[0].size();
        
        int lo, hi, mid;
        
        for (int i=0; i<m; i++){
            if (mat[i][0]<=target && mat[i][n-1]>=target){
                lo = 0;
                hi = n - 1;
                while (lo <= hi){
                    mid = ((lo + hi) >>1);
                    if (mat[i][mid] == target) return true;//returning the final result
                    else if (mat[i][mid] < target) lo = mid + 1;
                    else hi = mid-1;
                }
            }
        }
        return false;
    }
};
