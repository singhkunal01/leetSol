class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
            //using bfs
     //declaration of variables;
     int row = grid.size(), col = grid[0].size(), total = 0, countRottenInQueue = 0, totalDays = 0;
     queue<pair<int, int>> rottenMark ;
     for(int i = 0  ; i < row; i++)
     {
         for(int j = 0; j < col; j++)
         {
             //count the number of filled cells i.e., which contains oranges (rotten || fresh);
             if(grid[i][j] != 0) total++;
             if(grid[i][j] == 2) rottenMark.push({i, j});
         }
     }
     //check the all possible cells and then mark the rotten oranges as per condition
     int xDir[4] = {0, 0, 1, -1}; //they tells us whether we have to move in left or right
     int yDir[4] = {1, -1, 0, 0};
     while(!rottenMark.empty())
     {
         int numberOfRottensInQueue = size(rottenMark);
         countRottenInQueue += numberOfRottensInQueue;
         while(numberOfRottensInQueue--)
         {
             auto content = rottenMark.front();
             rottenMark.pop();
             int xCordinate = content.first, yCordinate = content.second;
             for(int i = 0; i < 4; i++)
             {
                 int newX = xCordinate + xDir[i], newY = yCordinate + yDir[i];
                 //check the outer Bounds
                 if(newX < 0 or newY < 0 or newX >= row or  newY >= col or grid[newX][newY] != 1)
                 {
                     continue;
                 }
                 grid[newX][newY] = 2;
                 rottenMark.push({newX, newY});
             }
         }
         if(!rottenMark.empty()) totalDays++;
     }
     return total == countRottenInQueue ? totalDays : -1; 
    }
};
