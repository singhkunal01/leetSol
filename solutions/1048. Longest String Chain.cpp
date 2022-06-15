    static bool compare(const string &s1, const string &s2) {
        return s1.length() < s2.length();
    }
class Solution{
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), compare);//sort the vector according to their lengths
        unordered_map<string, int> dp;
        int res = 0;
        for (string w : words) {
            for (int i = 0; i < w.length(); i++) {//iterate over a single string
                string pre = w.substr(0, i) + w.substr(i + 1);//substring from starting to the i of ith size + substring till the next character will be concatenated
                dp[w] = max(dp[w], dp.find(pre) == dp.end() ? 1 : dp[pre] + 1);
            }
            res = max(res, dp[w]);
        }
        return res;
    }
};
