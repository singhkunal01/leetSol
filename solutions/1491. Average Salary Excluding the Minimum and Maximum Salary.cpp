class Solution {
public:
    double average(vector<int>& salary) {
        int n = size(salary);
        sort(salary.begin(),salary.end());
        int sum = accumulate(salary.begin()+1,salary.end()-1,0);
        return sum/(n-2*1.0);
    }
};
