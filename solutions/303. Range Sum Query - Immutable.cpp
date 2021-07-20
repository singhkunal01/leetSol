class NumArray {
public:
    vector<int> ans;
  NumArray(vector<int>& a) {
        ans.resize(a.size()+1);
        for (int i = 0; i <size(a); ++i) ans[i+1]=ans[i]+a[i];
    }
    
    int sumRange(int left, int right) {
        return ans[right+1]-ans[left];
    }
};
​
/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
