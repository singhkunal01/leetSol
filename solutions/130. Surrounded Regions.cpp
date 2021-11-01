class Solution {
public:
    bool check;
 void markThem(vector<vector<char>> &board,int i ,int j,int r ,int c){
    if(i < 0 or j < 0 or i>r - 1 or j > c - 1) return;
if(board[i][j]=='X') return ;
board[i][j]='X';
markThem(board,i-1,j,r,c);
markThem(board,i+1,j,r,c);
markThem(board,i,j-1,r,c);
markThem(board,i,j+1,r,c);
 }
​
 void dfs(vector<vector<char>> &board,int i ,int j,int r ,int c,vector<vector<bool>> &vis){
//check all the boundaries
    if(i < 0 or j < 0 or i > r - 1 or j > c - 1) return;
    if(board[i][j]=='X' or vis[i][j]) return;
   if(i <=  0 or j<= 0 or i >=r - 1 or j >= c - 1) check = true;
   vis[i][j] = true;
   dfs(board, i - 1, j, r, c, vis);
   dfs(board, i + 1, j, r, c, vis);
   dfs(board, i, j - 1, r, c, vis);
   dfs(board, i, j + 1, r, c, vis);
​
 }
 void solve(vector<vector<char>> &board) {
     int r = board.size();
     int c = board[0].size();
     if(r <= 1 or c <= 1) return ;
     vector<vector<bool>> vis(r, vector<bool> (c, false));
     for(int i = 1; i < r - 1; i++) {   //to check the area which donot contains boundary {
         for(int j = 1; j < c - 1; j++) {
             if(board[i][j] == 'O' and !vis[i][j]) {
                 check = false;
                 dfs(board, i, j, r, c, vis);
                 if(check == false) {
                     markThem (board, i, j, r, c);//check if check is false then flip the O to X and mark them true;
                 }
                 check = true;
             }
         }
     }
}
};
