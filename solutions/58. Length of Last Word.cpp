class Solution {
public:
    int lengthOfLastWord(string s) {
    int n = s.size();
    int length = 0;
        if (n == 1 and s[0] != ' ') return 1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ' ') continue;
        while (i >= 0 and s[i] != ' ') {
            length++;
            i--;
            if (i >= 0 and s[i] == ' ' )  return length;
        }
    }
    return length;
    }
};
