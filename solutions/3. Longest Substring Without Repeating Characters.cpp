class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256,-1);
        int left=0,right = 0,len=0,n=s.size();
     while(right<n){
         if(freq[s[right]]!=-1) left = max (freq[s[right]]+1,left);
         freq[s[right]]=right;
         len = max(right-left+1,len);
         right++;
     }   
        return len;
    }
};
