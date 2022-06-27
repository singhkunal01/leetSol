class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.length(),m = t.length();
        if(n>m) return false;
        int p = 0;
        for(int i=0;i<m;i++){
            if(s[p] == t[i] )p++;
   }
               return p==n;
               }
};
