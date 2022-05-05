class Solution {
    private:
    void dfsHelper(vector<vector<int>>& graph,vector<vector<int>>& res,vector<int>& path,int curr){
        path.push_back(curr);
        if(curr==graph.size()-1){
            res.push_back(path);
            // return;
        }
        else for(auto &it:graph[curr]){
            dfsHelper(graph,res,path,it);
        }
        //backtracking
        path.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>res;
        vector<int>path;
        dfsHelper(graph,res,path,0);
        return res;
    }
};
