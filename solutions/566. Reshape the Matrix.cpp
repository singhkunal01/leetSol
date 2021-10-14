class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
   //first approach : Using extra space
        
     /*int m = mat.size(), n = mat[0].size();
     vector<vector<int>>result(r,vector<int> (c));
         vector<int> temp;
     if(m * n != r * c) return mat;
     for(int i = 0 ; i < m; i++) {
         for(int j = 0; j < n; j++) {
             temp.push_back(mat[i][j]);
         }
     }
    int rows = 0, col = 0;
    for(int i = 0; i < size(temp); i++)
    {
        if(col == c){
            rows++;
            col = 0;
        }
        result[rows][col] = temp[i];
        col++;
    }
     return result;*/
        
        //second approach : similar to two pointer
        
      /*  int m = mat.size(), n = mat[0].size();
     vector<vector<int>>result(r,vector<int> (c));
     if(m * n != r * c) return mat;
            int row = 0, col = 0;
     for(int i = 0 ; i < m; i++){
         for(int j = 0; j < n; j++){
            if(col==c){
                row++;
                col = 0;
            }
            result[row][col++]=mat[i][j];
         }
     }
     return result;*/
        
        //third approach
    }
};
