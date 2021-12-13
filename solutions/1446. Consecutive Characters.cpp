class Solution {
public:
    int maxPower(string s) {
           int len = s.length(), power = 1;
    for (int i = 0; i < len - 1;) {
        /*check if the current character is same as the previous one then
        check and increase the counter until we cannot find different
        counter other than the current one*/
        int curr = i;
        int next = i + 1;
        int maxLength = 1;
        if (s[curr] != s[next]) i++;
        //if the current character is sane as the next one then -
        else {
            while (s[curr] == s[next]) {
                maxLength++;
                next++;
            }
            i = next;
            power = max(power, maxLength);
​
        }
    }
    return power;
    }
};
