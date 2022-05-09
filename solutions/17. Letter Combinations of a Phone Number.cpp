class Solution {
    private:
void designCombinations(int i, unordered_map<char, string> &mp, string &fill, vector<string> &res, string &digits) {
    if (i == digits.size()) {
        res.push_back(fill);
        return;
    }
    for (auto &each : mp[digits[i]]) {
        fill.push_back(each);
        designCombinations(i + 1, mp, fill, res, digits);
        fill.pop_back();
    }
}
public:
    vector<string> letterCombinations(string digits) {
     vector<string> res;
    string fill;
    if (digits == "") return res;
    unordered_map<char, string> mpp{{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
    designCombinations(0, mpp, fill, res, digits);
    return res;
    }
};
