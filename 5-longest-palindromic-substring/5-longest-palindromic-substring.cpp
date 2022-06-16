class Solution {
    private:
    int expand(string s, int left , int right){
        while(left >= 0 and right<s.length() and (s[left]==s[right])){
            left--;
            right++;
        }
        return right - left - 1;
    }
public:
    string longestPalindrome(string s) {
        //https://www.youtube.com/watch?v=AKIHWGumagI&t=915s
        //solved using manacher's algorithm
        int start = 0,end = 0;
        for(int i = 0;i<s.length();i++){
            int odd = expand(s,i,i);
            int even = expand(s,i,i+1);
            int res = max(odd,even);
            if(res > end - start){
                start = i - (res-1)/2;
                end = i + res/2;
            }
        }
        return s.substr(start,end - start+1);
    }
};