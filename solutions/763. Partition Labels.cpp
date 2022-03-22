class Solution {
public:
    vector<int> partitionLabels(string s) {
       //intution behind the solution is : Just keep a track of each letters last index wherver it is because this will be the max length for that partition , WHY ? -> See according to question single letter can be in only single partition it cannot be in any other partition THATSWHY .
        int n = size(s);
        unordered_map<char,int> mp;
        for(int i = 0;i<n;i++){
            mp[s[i]]=i;
        }
        vector<int> res;
        // for(auto i:mp) cout<<i.first<< " - "<<i.second<<"\ ";
        int prev = -1,maxLength = 0;
        for(int i = 0; i < n ; i++){
          maxLength = max(maxLength,mp[s[i]]);
            if(i==maxLength){
                res.push_back(maxLength - prev);
                prev = maxLength;
            }
        }
        
        return res;
    }
};
​
//Time complexity : O(N)
// Space complecity : O(N)
