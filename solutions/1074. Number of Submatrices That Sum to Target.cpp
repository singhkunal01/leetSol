class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& mt, int target) {
        //making the given matrix as a prefix sum matrix
        int n = mt.size(), m = mt[0].size();
        for(int i = 0 ; i < n;i++){
            for(int j = 1;j< m; j++){
                mt[i][j]+=mt[i][j-1];//on the basis of columns
            }
        }
        int res = 0;
        //not iterate over this matrix columns only by making map of values sum
        unordered_map<int,int> mp;
        for(int colFirst =0;colFirst<m;colFirst++){
            for(int colSecond =colFirst;colSecond<m;colSecond++){
                int sum =0;
                mp={{0,1}};//initialise with the first key 
                //iterate over each row now
                for(int row = 0;row<n;row++){
                    sum+=mt[row][colSecond]-(colFirst>0?mt[row][colFirst-1]:0);
                    res += mp.find(sum - target) != mp.end() ? mp[sum - target] : 0;
                    mp[sum]++;
                }
            }
        }
        return res;
    }
};
