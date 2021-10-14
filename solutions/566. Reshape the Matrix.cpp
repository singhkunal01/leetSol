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
        
        //third approach: easily when we are the last index of column in reshaped matrix then simply again start with initial value so:-
        int m = mat.size(), n = mat[0].size();
     vector<vector<int>>result(r,vector<int> (c));
     if(m * n != r * c) return mat;
     for(int i = 0 ; i < m*n; i++){
            result[i/c][i%c]=mat[i/n][i%n];
         }
     return result;
    }
};
