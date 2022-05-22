class Solution {
public:
    int countSubstrings(string s) {
​
        int n = s.size(),l ,r,ans=0;
        for(int i = 0;i<n;i++){
            l  = r = i;
        while(l>=0 and r<n and s[l]==s[r]){
            ans++,l--,r++;
        }//for odd length substring
        l = i,r = i+1;
        while(l>=0 and r<n and s[l]==s[r]){
            ans++,l--,r++;
        }
    }
        return ans;
    }
};
