class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>&nums2) {
        vector<int> ans;
unordered_set<int> setForNums1(nums1.begin(),nums1.end()); //for second test case value in this set are 4->9->5
for(auto x:nums2){
    if(setForNums1.count(x)){
        ans.push_back(x);
        setForNums1.erase(x); //because set contains only unique elements so it helps to erase the duplicates value present in the second array
    }
}
return ans;
    }
};
