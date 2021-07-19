class Solution {
public:
    string addStrings(string num1, string num2) {
  if (size(num2)==0) return num1;   //if either of the string is empty return another one
  if (size(num1)==0) return num2;   
  int i=size(num1)-1,j=size(num2)-1;
  int carry=0,sum;
  string ans;
  while(i>=0 || j>=0 ||carry){
    sum=0;
  if(i>=0){ 
  sum+=num1[i]-48;
  }
  if(j>=0) { 
  sum+=num2[j]-48; 
  }
    sum+=carry;
    carry=sum/10;
    ans+=(to_string(sum%10));
      i--;j--;
  }
  if(carry!=0) ans+=carry;
  reverse(ans.begin(),ans.end());
return ans;
    }
};
