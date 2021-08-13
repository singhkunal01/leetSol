class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
      unordered_set<int> s{arr,arr+N};
     int ans=0;
       for(int i=0;i<N;i++){
       if (s.find(arr[i] - 1) == s.end())
        {
            int j = arr[i];
            while (s.find(j) != s.end()) j++;
            ans = max(ans, j - arr[i]);
        }
      }
    return ans;
    }
};
