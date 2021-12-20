class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
     sort(arr.begin(),arr.end()) ;
       vector<vector<int>> res;
        int n = arr.size();
//find the minDifference in the whole sorted array -
        int minDiff = INT_MAX;
        for(int i = 1;i<n;i++){
        minDiff=min(minDiff,arr[i]-arr[i-1]);
        }
        // cout<<minDiff;
        for(int i = 1;i<n;i++){
            int diff = arr[i]-arr[i-1];//and check whether the difference is equal to the minium or not
            if(diff == minDiff)
                res.push_back({arr[i-1],arr[i]});
        }
        return res;
    }
};
