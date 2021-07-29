class Solution {
public:
    
bool isArithemetic(vector<int> &copyOfNums,int left,int right){
vector<int> store(right-left+1);
int j=0;
for(int i=left;i<=right;i++) {
store[j]=copyOfNums[i];
j++;
}
sort(store.begin(),store.end());
int diff = store[1]-store[0];
for(int i=2;i<size(store);i++) 
   if(store[i]-store[i-1]!=diff) 
     return false;
  return true;
}
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
vector<bool> result;
int i=0;
while(i<size(l)){
result.push_back(isArithemetic(nums,l[i],r[i]));
i++;
}
return result;
    }
};
