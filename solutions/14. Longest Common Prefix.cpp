class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          if (strs.size()==0) return "";
  string firstString = strs[0];//for first test case firstString is flowers
    for (int i = 0; i < firstString.length() ; i++){
        char c = firstString.at(i);
        for (int j = 1; j < strs.size(); j ++) {
            if (i == strs[j].length() || strs[j].at(i) != c)
                return firstString.substr(0, i);             
        }
    }
    return strs[0];
    }
};
