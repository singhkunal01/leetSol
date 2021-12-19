class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s{nums.begin(),nums.end()};
        if(s.size()<3) return *s.rbegin();
        int t = 1;
     for(auto i = s.rbegin();i!=s.rend();i++){
         cout<<*i;
        if(t==3) 
         return *i;
      t++;
      }
        return -1;
    }
};
