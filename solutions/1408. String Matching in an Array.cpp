class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> res;
        for(int j = 0;j<words.size();j++){
            string s = words[j];
            for(int i = 0;i<words.size();i++){
                if(j==i or words[i].size()<s.size()) continue;
                if(words[i].find(s)!=string::npos and count(begin(res),end(res),s)<=0) res.push_back(s);
            }
        }
         
        return res;
    }
};
