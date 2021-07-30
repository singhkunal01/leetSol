class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
           vector<int> res(k,0);
        unordered_map<int, unordered_set<int>> store;
        for(auto &x : logs){
        store[x[0]].insert(x[1]);
           }
        
        //for first test case , till here store contain ==>  [ { 1 : 3  2  } { 0 : 2  5  } ]
        for(auto &x : store){
          int sizeOfset = size(x.second); //to store size of each set
            if(sizeOfset <= k)
                res[sizeOfset - 1]++;
                    }
        return res;
    }
};
