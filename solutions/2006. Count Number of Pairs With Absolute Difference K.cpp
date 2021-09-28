class Solution {
public:
    //solution is inspired by count sort HERE first find all the possible pairs whoe difference is k here on number is small and another one is greater than the other one then check whether these both numbers are present in the array or not if they are then increase counter
    int countKDifference(vector<int>& nums, int k) {
        int ct=0;
        int hash[101]={0};
        for(int x:nums) hash[x]++;
        for(int i = k+1;i<=100;i++){
            ct+=(hash[i]*hash[i-k]);
        }
        return ct;
    }
};
