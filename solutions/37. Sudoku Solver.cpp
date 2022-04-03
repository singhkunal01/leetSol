class Solution {
public:
    bool isValidToPutNumber(vector<vector<char>> &board, int row, int col, int num) {
//there are three conditions to check i.e.,same row ,same column and that sub matrxi (3X3) in which that value is present
    for (int i = 0; i < 9; i++) {
        //for the same column
        if (board[i][col] == num) return false;
        //for the same row
        if (board[row][i] == num) return false;
        //for that sub matrix in which that element present
        if (board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == num) return false;
    }
    return true;
}
​
//this function tries out all possible cases to put the valid number [1,9]
bool fillEmptySudukos(vector<vector<char>> &board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
//if the box is empty then only move further and if it will fill after the possible cases then return true;
            if (board[i][j] == '.') {
                for (char num = '1'; num <= '9'; num++) {
//check whether the place is suitable to place that number or not
                    if (isValidToPutNumber(board, i, j, num)) {
                        board[i][j] = num;//if that number is valid to put then place it
//use recursion to check all possible multiple cases
                        if (fillEmptySudukos(board)) return true;
                        else board[i][j] = '.';//this is the backtrack step when we are returning
                    }
                }
                return false;
            }
        }
    }
    return true;
}
    void solveSudoku(vector<vector<char>>& board) {
        fillEmptySudukos(board);
    }
};
