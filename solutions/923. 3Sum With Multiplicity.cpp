class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
         unordered_map<int,long> mp;
        int mod = 1e9+7;
        for(int i : arr) mp[i]++;
        long ans = 0;
        for(auto &i:mp){
            for(auto &j:mp){
                int f = i.first , s = j.first, t = target - f - s;
                if(!mp.count(t)) continue;
                if(f==s and s == t)
                    ans+=(mp[f]*(mp[f] - 1)*(mp[f]-2))/6;
                else if(f==s and s!=t)
                    ans+=(mp[f]*(mp[f] - 1))/2*mp[t];
                else if(f<s and s<t)
                    ans+=mp[f]*mp[s]*mp[t];
            }
        }
        return ans%mod;
    }
};
​
