class Solution {
    int giveSum(string s){
        int sum = 0;
        for(char i:s){
            sum+=(i-'0');
        }
        return sum;
    }
public:
    int maximumSum(vector<int>& nums) {
        int n= size(nums);
        vector<int> sum(n);
        for(int i = 0;i<n;i++){
            sum[i]=giveSum(to_string(nums[i]));
        }
        map<int,vector<int>> res;
        for(int i = 0;i<n;i++){
            int c = sum[i];
            res[c].push_back(nums[i]);
        } 
​
         }
        int maxi = -1;
         for(auto i:res){
             int sum =0;
             if(i.second.size()>1){
             sort(i.second.begin(),i.second.end());
                 sum+=i.second[i.second.size()-2]+i.second[i.second.size()-1];
             }
             maxi=max(maxi,sum);
         }       
// cout<<endl;
        return maxi!=0?maxi:-1;
    }
};
