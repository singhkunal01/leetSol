class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
/*unordered_map<string,pair<int,int>> mp;
map<int,string> ump;
vector<string> temp;
int ct = 0;
for(int i = 0;i<arr.size();i++) {
    int freq = mp[arr[i]].second++;
    mp[arr[i]].first=i;
}
for(auto x:mp){
    if(x.second.second==1){
ump.insert({x.second.first,x.first});
    }
}
for(auto x:ump){
    temp.push_back(x.second);
}
if(k>temp.size())
return "";
else return temp[k-1];*/
        map<string ,int> mp;
        for(auto ch:arr){
            mp[ch]++;
        }
        int ct = 0;
        for(auto s:arr){
            if(mp[s]==1){
                ct++;
                if(ct==k) return s;
            }
        }
        return "";
    }
};
