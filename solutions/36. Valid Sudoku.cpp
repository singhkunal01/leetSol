class Solution {
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        unordered_set<string> mp;
        for(int i = 0 ; i < 9; i++)
        {
            for(int j = 0 ; j < 9; j++)
            {
                int curr_char = board[i][j]-'0';
                if(board[i][j] != '.')
                {
                    if((mp.find(to_string(curr_char) + " is found at row " + to_string(i)) == mp.end()) and (mp.find(to_string(curr_char) + " is found at column " + to_string(j)) == mp.end()) and (mp.find(to_string(curr_char) + " is found at sub-box " + to_string((i/3)*3 + (j/3))) == mp.end()))
                    {
                     mp.insert(to_string(curr_char) + " is found at row " + to_string(i));
            mp.insert(to_string(curr_char ) + " is found at column " + to_string(j));
            mp.insert(to_string(curr_char) + " is found at sub-box " + to_string((i/3)*3 + (j/3)));
               } 
                else
                    return false;
                   // for(auto x:mp) 
                   //     cout<<x<<endl; for debugging
                }
            }
        }
        return true;
    }
};
