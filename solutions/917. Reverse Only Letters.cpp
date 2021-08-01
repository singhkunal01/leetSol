class Solution {
public:
string reverseOnlyLetters(string &s) {
int l=0,r=size(s)-1;
while(l<=r){
 if(( s[l]>='A' && s[l]<='Z' || s[l]>='a'&&s[l]<='z') && ( s[r]>='A' && s[r]<='Z' || s[r]>='a'&&s[r]<='z')){
swap(s[l],s[r]);
l++;
r--;
}
else if ((s[l]>='!'&& s[l]<='@' || s[l]>=91 && s[l]<=96) ||(s[r]>='A' && s[r]<='Z' || s[r]>='a'&&s[r]<='z')) l++;
else if (( s[l]>='A' && s[l]<='Z' || s[l]>='a'&&s[l]<='z')|| ((s[r]>='!'&& s[r]<='@')|| (s[r]>=91 && s[r]<=96)))r--;
else if((s[l]>='!'&& s[l]<='@' || s[l]>=91 && s[l]<=96)|| (s[r]>='!'&& s[r]<='@'||s[r]>=91 && s[r]<=96)) {
  l++;
  r--;
}
}
return s;  
}
};
