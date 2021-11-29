class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
    int n = nums.size();
 /*   vector<long long> prefix(n + 1, 0), suffix(n + 1, 0), res(n, -1);
    if (n == k) return (int)res;
    for (int i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + nums[i - 1];
    for (int i = n - 1; i >= 0; i--) suffix[i] = suffix[i + 1] + nums[i];
    // print(mp(prefix, suffix));
    long long totalNumbers = k * 2 + 1;
    for (long long i = 0; i < n; i++) {
        if (i < k or i + k >= n) {
            res[i] = -1;
            continue;
        }
        res[i] = ((prefix[i + 1] - prefix[i - k]) + (suffix[i + 1] - suffix[i + k + 1])) / totalNumbers;
    }
    return res;*/
        
    //ANOTHER SOLUTION USING SLIDING WINDOW
/* if there is K then the length of window is always  2*k+1*/
        vector<int> res (n,-1);
        long sum = 0,len = 2*k+1;
        for(int i = 0;i<n;i++){
            sum+=nums[i];
            if(i>=len) sum-=nums[i-len];//getting out of the window length
            if(i>=len-1) res[i-k]=sum/len;
        }
        return res;
    }
};
