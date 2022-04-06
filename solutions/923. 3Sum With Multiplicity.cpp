class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
         map<int,int> mp;
        int mod = 1e9+7;
        for(int i : arr) mp[i]++;
        int ans = 0;
        for(auto &i:mp){
            for(auto &j:mp){
                int f = i.first , s = j.first, t = target - f - s;
                if(!mp.count(t)) continue;
                if(f==s and s == t)
14
15
16
17
18
19
20
21
22
23
