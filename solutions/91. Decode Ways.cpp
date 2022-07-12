class Solution {
public:
    int numDecodings(string s) {
    if (!s.size() || s.front()== '0') return 0;
    int st = 1, en = 1;
    for (int i = 1; i < s.size(); i++) {
      if (s[i] == '0') st = 0;//leading zeroes
      if (s[i - 1] == '1' or s[i - 1] == '2' and s[i] <= '6') {
        st = en + st;
        en = st - en;
      }
      else {
        en = st;
      }
    }
​
    return st;
    }
};
