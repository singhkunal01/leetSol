class Solution {
bool dfs(vector<int>& matchsticks, int target, int ind, vector<int>& sides) {
    if (ind == matchsticks.size()) {
        //check whether the all sides are equal or not
        return sides[0] == sides[1] && sides[1] == sides[2] && sides[2] == sides[3] ? 1 : 0;
    }
    //iterate over all sides
    for (int i = 0; i < 4; i++) {
        if (sides[i] + matchsticks[ind] > target) continue; //optimisation 1 , for more see notes
        
        //helps to solve the overlapping 
        int j = i - 1;
        while(j>=0){
            if(sides[j]==sides[i]) break;
            j--;
        }
        if(j!=-1) continue;
        sides[i] += matchsticks[ind];
        if (dfs(matchsticks, target, ind + 1, sides)) return true;
        sides[i] -= matchsticks[ind];
    }
    return false;
}
public:
bool makesquare(vector<int>& matchsticks) {
    int target = accumulate(matchsticks.begin(), matchsticks.end(), 0) / 4;
    vector<int> sides(4, 0);
    //another optimisation
    sort(matchsticks.begin(), matchsticks.end(), greater<int>());
​
    return dfs(matchsticks, target, 0, sides);
​
   }
};
