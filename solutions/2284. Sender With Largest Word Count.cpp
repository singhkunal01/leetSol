class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        int n = senders.size();
        vector<int> res;
        for (string &s : messages) {
            string t = s, w;
            stringstream n(t);
            int ct = 0;
            while (n >> w) {ct++;}
            res.push_back(ct);
        }
        map<string, int>mp;
        int i = 0;
        for (auto it : senders) {
            mp[it] += res[i++];
        }
        string ans;
        int j = 0;
        for (auto i : mp) {
            if (i.second >= j) {
                ans = i.first;
                j = i.second;
            }
        }
        return ans;
    }
};
