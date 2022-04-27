class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        for(int i = 0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
    vector<int> vis(n, 0);
    vis[source] = 1;
    queue<int> ds({source});
    while (!ds.empty()) {
        int node = ds.front(); ds.pop();
        //check whether we reached to destination or not if yes then return true
        if(node==destination) return true;
        for (auto &all : adj[node]) {
            if  (!vis[all]) {
                vis[all] = 1;
                ds.push(all);
            }
        }
    }
         return false;
    }
};
