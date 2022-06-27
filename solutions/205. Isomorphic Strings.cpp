class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char> checker(128);
        int n = s.size();
        for(int i = 0;i<s.size();i++){
            char chs = s[i],cht=t[i];
            if(!checker[chs]){//if we donot seen that character
                //now check for the ith character of string t in the checker
                for(char ch:checker)
                    if(ch==t[i])
                        return false;
                 checker[chs]=t[i];
            }
            else {
                if(checker[chs]!=t[i])return false;
            }
        }
        return true;
    }
};
