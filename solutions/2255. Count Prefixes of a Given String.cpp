class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ans = 0;
        for(int i = 0;i<s.size();i++){
            ans+=count(words.begin(),words.end(),s.substr(0,i+1));
            cout<<s.substr(0,i+1)<<endl;
        }
        return ans;
    }
};
