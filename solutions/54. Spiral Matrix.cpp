class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int r = matrix.size(), c = matrix[0].size();
    int i = 0, j = 0;
    vector<int> check{c, r - 1};
    vector<int>  ans;
    vector<vector<int>>dir{{0, 1}, {1, 0}, {0, -1}, { -1, 0}};
    int iniR = 0, iniC = -1, currDir = 0;
    while (check[currDir % 2]) {
        // print(check[currDir % 2])
        for (int i = 0; i < check[currDir % 2]; i++) {
            iniR += dir[currDir][0];//helps to move RDLT(right,down,left,top)
            iniC += dir[currDir][1];//helps to move RDLT
            // print(mp(iniR, iniC))
            ans.push_back(matrix[iniR][iniC]);
        }
        check[currDir % 2]--;//to keep track of last moves (well it was left or right  or top or down)
        currDir = (currDir + 1) % 4; //stores the current dir
        // print(mp(check[currDir % 2], currDir))
    }
    return ans;
    }
};
