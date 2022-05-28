class Solution {
public:
    bool digitCount(string num) {
        map<char, int> mp;
        for (char i : num)mp[i]++;
        string temp;
        for (int i = 0; i < num.size(); i++) {
            temp += mp[i + '0'] + '0';
        }
        return temp == num;
    }
};
