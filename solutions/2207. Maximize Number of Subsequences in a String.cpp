class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
       long long res1,res2;
        res1 = res2 = 0;
        string s = pattern[0]+text;//if we add the first character in the beginning
        string p = text + pattern[1];//if we add the second character in the last
        long long ct = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]==pattern[0])ct++;
            else if(s[i]==pattern[1]) res1+=ct;
        }
        if(pattern[0]==pattern[1])res1 = (ct*(ct-1))>>1;
        ct = 0;
        for(int i = p.size()-1;i>=0;i--){
            if(p[i]==pattern[1])ct++;
            else if(p[i]==pattern[0]) res2+=ct;
        }
        if(pattern[0]==pattern[1])res2 = (ct*(ct-1))>>1;
     return max(res1,res2);   
    }
};
