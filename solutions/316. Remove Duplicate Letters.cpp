class Solution {
public:
    string removeDuplicateLetters(string s) {
    int n = s.size();
    vector<int>vis(26, 0), freq(26);
    string res;
    for (int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;//track of every character's frequency
    }
    for (int k = 0; k < n; k++) {
        char i = s[k];
        freq[i-'a']--;//which means we have visited it once
        if (vis[i - 'a'] == 0) {
            while (res.size() > 0 and res.back() > i and freq[res.back() - 'a']>0) //loops is similar to the stack process iterate till we don't get empty string and last character which we added the is greater than the current one and also check whether the current character is present or not.
            {
                vis[res.back() - 'a'] = 0;//if we get all condn. true then we have to revisit that character hence place the 0 for that.
                res.pop_back();//similar to backtrack
            }
            res+=i;
            vis[i - 'a'] = 1;//if we are goinf on the right path then continuosly mark as visited in the array.
        }
    }
    return res;
    }
};
