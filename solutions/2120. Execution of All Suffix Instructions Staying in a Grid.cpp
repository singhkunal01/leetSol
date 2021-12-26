class Solution {
//to check the outer bounds of the string
bool isOutOfboundary(int n, int currRow, int currColumn) {
    //this is to check whether is robot is in boundary or goes out of  boundary if he is out of boundary then simply return false;
    if (currRow >= 0 and currRow < n and currColumn >= 0 and currColumn < n)
        return true;
    return false;
}
bool moveRobot(char c, int &currRow, int &currColumn, int n) {
    //this is used to mmove robot as the function name suggests
    if (c == 'R') currColumn ++;
    if (c == 'L') currColumn -- ;
    if (c == 'D') currRow ++;
    if (c == 'U') currRow -- ;
    if (isOutOfboundary(n, currRow, currColumn)) return true;//if he is not out of boundary then no problem just return true otherwise he cannot move so return false;
    return false;
}
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
//iterate over the string to check his all movements
//main thing you have to remeber is just pass the currRow and currColumn by their address so that when the one function call is over it reserves the current position of robot.
    int len = s.size();
    vector<int> res;
    for (int i = 0; i < len; i++) {
        int canMove = 0, currRow = startPos[0], currColumn = startPos[1];
        for (int j = i; j < len; j++) {
            if (moveRobot(s[j], currRow, currColumn, n))//if robot can move then increase his movement
                canMove++;
            else
                break; // if the place in whole string occurs where robot moves out of boundary then break otherwise canMove can be increment further if such a case occured.
        }
        res.push_back(canMove);
    }
    return res;
    }
};
