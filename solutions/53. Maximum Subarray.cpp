class Solution {
public:
    int maxSubArray(vector<int>& a) {
        //kadane's algorithm
        int n=a.size();
        int maxSum=INT_MIN,sum=0;
for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (maxSum < sum)
            maxSum = sum;
        if (sum < 0)
            sum = 0;
    }
    return maxSum;
    }
};
