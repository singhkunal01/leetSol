class Solution {
public:
     //MY SOLUTION 
    
  /* int countDigits(int num){
  long long int ct=0;
  while(num!=0){
    num/=10;
    ct++;
  }
  return ct;
}
    
vector<int> addToArrayForm(vector<int>& num, int k) {
vector<int> temp(countDigits(k)),ans;
int i=size(temp)-1;
while(k!=0){
temp[i]=k%10;
k/=10;
i--;
}
int carry=0,sum,ptr1=size(num)-1,ptr2=size(temp)-1;
while(ptr1>=0||ptr2>=0||carry){
  sum=0;
if(ptr1>=0) sum+=num[ptr1];
if(ptr2>=0) sum+=temp[ptr2];
sum+=carry;
carry=sum/10;
ans.push_back(sum%10);
