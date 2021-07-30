class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
         unordered_map<int,vector<int>> store;
        int rows = mat.size(),cols = mat[0].size();
        //first pick out all the diagonals
        for(int i=0;i<rows;i++)
          for(int j=0;j<cols;j++)
            store[i-j].push_back(mat[i][j]);
        //sort all the diagonals
        for(auto &x:store) sort(x.second.begin(),x.second.end());
        //after sorting we have to traverse from back because we have to remove each value from the vector which we have inserted
        for(int i=rows-1;i>=0;i--) {
           for(int j=cols-1;j>=0;j--) {
            int val = store[i-j].back();
              mat[i][j]=val;
              store[i-j].pop_back();
        }
    }
return mat;
    }
};
