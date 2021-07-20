class Solution {
public:
    int pivotIndex(vector<int>& nums) {
//mycode using prefix and suffix sum
/* 
int sz=size(nums);
int *leftPre=new int[sz+1];
int *rightPre=new int[sz+1];
leftPre[0]=nums[0];
rightPre[sz-1]=nums[sz-1];
for(int i=1;i<=sz;i++){
leftPre[i]=leftPre[i-1]+nums[i];
}
for(int i=sz-2;i>=0;i--){
rightPre[i]=rightPre[i+1]+nums[i];
}
for(int i=0;i<sz;i++){
if(leftPre[i]==rightPre[i]) return i;
}
delete[] leftPre;
delete[] rightPre;
return -1;*/
        int sum=0,newSum=0;
        for(int x:nums) sum+=x;
        for(int i=0;i<size(nums);i++){
            sum-=nums[i];
            if(sum==newSum) return i;
            newSum+=nums[i];
        }
        return -1;
    }
};
