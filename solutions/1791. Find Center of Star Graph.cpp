class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int edge = edges.size();
        bool zeroth=true,first = true;
        int ans;
        int com1 = edges[0][0],com2 = edges[0][1];
    for(int i = 1;i<edge;i++){
        if(edges[i][0]== com1){
            ans = com1;
        }
        if(edges[i][0]== com2){
            ans = com2;
        }
        if(edges[i][1]== com1){
            ans = com1;
        }
        if(edges[i][1]== com2){
            ans = com2;
        }
    }
// 1 2 
// 2 3 
// 2 4 
    return ans;
    }
};
