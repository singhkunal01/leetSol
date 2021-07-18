class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
      vector<bool> hash(26);
for (auto ch : brokenLetters)
hash[ch - 'a'] = true;
int res = 0, cnt = 0;
for (auto ch : text){
if (ch == ' ') {
if(cnt==0) {
  res++;
}
cnt = 0;
}
else if(hash[ch - 'a']){
    cnt ++;
}
}
if(cnt==0) res++;
return res;
    }
};
