class Solution {
public:
    string intToRoman(int num) {
    string res;
string s[13]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
int arr[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
  for (int i = 12; num!=0,i>=0; --i)
{
while(num>=arr[i]){
num-=arr[i];
res+=s[i];}
 }
return res;
    }
};
