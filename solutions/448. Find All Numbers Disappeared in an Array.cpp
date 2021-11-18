class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       vector<int> res;
       vector<int> hash(nums.size()+1,0);
        for(int val:nums) hash[val]++;
        // for(int val:hash) cout<<val<<" ";
        for(int i = 1;i<hash.size();i++){
            if(hash[i]==0) res.push_back(i);
        }
        return res;
    }
};
