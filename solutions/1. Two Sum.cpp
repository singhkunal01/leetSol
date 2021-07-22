class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      //with the help of hash maps
        unordered_map<int,int> store;
        for(int i=0;i<size(nums);i++){
            int toFind=target-nums[i];
            if(store.find(toFind)!=store.end()) 
                return {store[toFind],i};
            store[nums[i]]=i;
        }
        return {};
    }
};
