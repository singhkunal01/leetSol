#define begEnd(x) (x).begin(),(x).end()
​
class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        int n = size(arr);
        vector<int> res;
        unordered_map<int, int> mpp;
        for(auto &x : arr) mpp[x]++; //freq of each value;
        for(auto &y : mpp) res.push_back(y.first);
        /*sorting if same as normal but different is lowest value among all the elements
        is also placed at last if the array contains negative values*/
        sort(begEnd(res), [](int val1, int val2) {return abs(val1) < abs(val2); });
        // 3 1 -13 6 => after sorting : 1  3  6 -13
        for(auto &x : res) {
            if(mpp[x] > mpp[x * 2]) return false;
            mpp[2 * x] -= mpp[x];
        }
        return true;
    }
};
