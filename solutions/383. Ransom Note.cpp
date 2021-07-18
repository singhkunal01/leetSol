class Solution {
public:
    bool canConstruct(string s, string t) {
vector<int> hashForS(26);
vector<int> hashForT(26);
for(char x:s) hashForS[x-97]++;
for(char x:t) hashForT[x-97]++;
bool flag=true;
for(int i=0;i<size(s);i++){
  if(hashForS[s[i]-97]<=hashForT[s[i]-97]) 
      flag=true;
  else {
        flag = false;
        break;
       }
 }
return flag;
    }
};
