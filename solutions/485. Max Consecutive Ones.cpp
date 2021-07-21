#define begEnd(x) (x).begin(),(x).end()
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
            int counter=0,maxCountOf1=INT_MIN;
    vector<int> v;
    for(int i=0;i<size(nums);i++){
      if(nums[i]==1){
        counter++;
        maxCountOf1=max(maxCountOf1,counter);
      }
      else{
            counter=0;
            maxCountOf1=0;
          }
      v.push_back(maxCountOf1);
    }
    return *max_element(begEnd(v));
    }
};
