class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        // set<int> s{nums.begin(),nums.end()};
        // while(true){
        //     if(s.find(original)==s.end()){
        //         break;
        //     }
        //     original*=2;
        // }
        vector<int> hash(1001,0);
        for(auto it:nums) hash[it]++;
        while(true){
            if(original <= 1000 and hash[original]>0) original*=2;
            else break;
        }
        return original;
    }
};
