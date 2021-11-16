class Solution {
public:
    
int count(int m, int n, int x) {
    int ans = 0;
    for (int i = 1; i <= m; i++)
        ans += min(x / i, n);
    return ans;
}
int findKthNumber(int m, int n, int k) {
    int left = 1, right = m * n, ans;
    while (left <= right) {
        int mid = left + ((right - left) >> 1);
        if (count(m, n, mid) < k)
            left = mid + 1;
        else
            right = mid - 1,
            ans = mid;
    }
    return ans;
}
};
