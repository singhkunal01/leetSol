    while (col >= 0) {
        if (board[row][col] == 'Q') return false;
        col--;
    }
​
//checking the 3 direction
    row = copyRow, col = copyCol;
    while (row < n and col >= 0) {
        if (board[row][col] == 'Q') return false;
        row++, col--;
    }
    return true;
}  
public:
//this function is used to place the queens on safe places and returns the possible answers
void solveProblem(int col, vector<string> &board, vector<vector<string>> &final, int n) {
//base case is simple whenever we reach out of the columns([0,n-1]) then return
    if (col == n) {
        final.push_back(board);
        return;
    }
    /* now iterate over rows for each columns and check whether the place for
    placing queen is safe or not if yes then place and call the same function*/
    for (int row = 0; row < n; row++) {
        if (isSafeToPlace(row, col, board, n)) {
//it means it is safe to place so
            board[row][col] = 'Q';
            solveProblem(col + 1, board, final, n);
            board[row][col] = '.';//removing the queen where we placed to check the possible cases using backtracking
        }
    }
}
    
    
    vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> final;
    vector<string> board(n);
    string s(n, '.');
    for (int i = 0; i < n; i++)board[i] = s;
    solveProblem(0, board , final , n);
    return final;
    }
};
