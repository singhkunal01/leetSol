class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
            int n = size(score);
    vector<string> res(n);
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[score[i]] = i;
    }
    int checker = n - 3, total = n, initial = 0;
    for (auto x : mpp) {
        if (initial != checker and initial < checker) {
            res[x.second] = to_string(total--);
            initial++;
        }
//if checker becomes equal to the initial then -
        else if (initial == n - 3) {
            res[x.second] = "Bronze Medal";
            initial++;
        }
        else if (initial == n - 2) {
            res[x.second] = "Silver Medal";
            initial++;
        }
        else if (initial == n - 1) {
            res[x.second] = "Gold Medal";
            initial++;
        }
    }
    return res;
    }
};
