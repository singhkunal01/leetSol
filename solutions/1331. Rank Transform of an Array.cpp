#define begEnd(x) (x).begin(), (x).end()
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
    vector <pair<int, pair<int, int>>> track;
    int n = arr.size(), j = 1;
    vector<int> ans(n);
    for (int i = 0; i < n; ++i)
        track.push_back({arr[i], {i, 1}});
    sort(begEnd(track));
    for (int i = 1; i < n; ++i) {
        if (track[i].first != track[i - 1].first)
            track[i].second.second = ++j;
        else
            track[i].second.second = j;
    }
    for (auto v : track) {
        ans[v.second.first] = v.second.second;
    }
    return ans;
    }
};
