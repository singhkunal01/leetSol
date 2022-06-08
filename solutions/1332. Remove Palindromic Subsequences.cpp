class Solution {
    bool isPal(string s,int i){
        if(i>=s.size()/2) return true;
        if(s[i]==s[s.size()-i-1])return isPal(s,i+1);
        return false;
    }
public:
    int removePalindromeSub(string s) {
        if(isPal(s,0)) return 1;
        return 2;
    }
};
