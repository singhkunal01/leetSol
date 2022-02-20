class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& it) {
        int res = 0, right = -1,left = -1;
        sort(it.begin(),it.end());
        for (auto &v : it) {
     if(v[0]>left and v[1]>right) {
         res++;
         left = v[0];
     }
         right = max(right,v[1]);//if we do not write that (taking max) then it occurs problem on cases like =>  [[1,2],[1,4],[3,4]] where after sorting still we get the larger interval at 1st index after the lesser one
        }
        return res;
    }
};
