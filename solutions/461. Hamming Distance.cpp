class Solution {
public:
    int hammingDistance(int x, int y) {
         int count = 0;
    int ans = x ^ y;
    while (ans > 0) {
        // print(ans)
        ans &= ans - 1;
        count++;
    }
    return count;
    }
};
