class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        //this is the simple problem if you broke it down into some observations like if after sorting first element if not 1 then the answer is only 1 for 0 like this count 1 and move forward
        sort(coins.begin(), coins.end());
        int res = 1;
        for (int a: coins) {
            if (a > res) break;
            res += a;
        }
        return res;
    }
};
