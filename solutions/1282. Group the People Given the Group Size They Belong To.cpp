class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& gz) {
        //     vector<vector<int>> ans;
        // unordered_map<int, vector<int>> bucket; 
        // for (int i=0; i<gs.size(); i++) {
        //     int key = gs[i];
        //     int val=bucket.count(key);
        //     if (val> 0)  bucket[key].push_back(i);
        //    else bucket[key] = vector<int>{i};
        //     if (bucket[key].size() == key) {
        //         ans.push_back(bucket[key]);
        //         bucket.erase(key); //so that no values get overlapped
        //     }
        // }
        // return ans;
          vector<vector<int>>res,ans(size(gz)+1); //according to contraints the maximum size is 500 so we can take size+1
      for(int i=0;i<size(gz);i++){
         ans[gz[i]].push_back(i);
    if (ans[gz[i]].size() == gz[i]) {
      res.push_back({});
      swap(res.back(), ans[gz[i]]);
      } 
    }
        return res;
    }
};
