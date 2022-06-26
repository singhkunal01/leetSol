class Solution {
​
public:
    int maxScore(vector<int>& cp, int k) {
     int n = cp.size(),sumFromLeft = 0,mxAns = INT_MIN;
     for(int i = 0;i<k;i++)sumFromLeft+=cp[i];
    mxAns = max(mxAns ,sumFromLeft);
    //one of the good problem from sliding window topic
    int sumFromRight = 0;
    for(int i = 0;i<k;i++){
        sumFromRight+=cp[n-i-1];//add the element from the right side
        sumFromLeft -=cp[k-1-i];//simultaneously remove the element from the last in the left subarray whatever u have taken(that is reduce the window size from left and increase the window size from the right);
        mxAns = max(mxAns,sumFromLeft+sumFromRight);
    }
        return mxAns;
    }
};
