class Solution {
public:
string reverseOnlyLetters(string &s) {
/* int l=0,r=size(s)-1;
while(l<=r){
 if(( s[l]>='A' && s[l]<='Z' || s[l]>='a'&&s[l]<='z') && ( s[r]>='A' && s[r]<='Z' || s[r]>='a'&&s[r]<='z')){
swap(s[l],s[r]);
l++;
r--;
}
else if ((s[l]>='!'&& s[l]<='@' || s[l]>=']' && s[l]<='`') ||(s[r]>='A' && s[r]<='Z' || s[r]>='a'&&s[r]<='z')) l++;
else if (( s[l]>='A' && s[l]<='Z' || s[l]>='a'&&s[l]<='z')|| ((s[r]>='!'&& s[r]<='@')|| (s[r]>=']' && s[r]<='`')))r--;
else if((s[l]>='!'&& s[l]<='@' || s[l]>=']' && s[l]<='`')|| (s[r]>='!'&& s[r]<='@'||s[r]>=']' && s[r]<='`')) {
  l++;
  r--;
}
}
*/
    int l=0,r=size(s)-1;
    while(l<=r){
        if(!isalpha(s[l])) l++;
        else if(!isalpha(s[r])) r--;
        else swap(s[l++],s[r--]);
        
    }
return s;  
}
};
