class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long> adj[n+1];
        for(auto &it:roads){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
    vector<long long> indegree(n, 0);
    //first calculate the indegree for each node
    for (int i = 0; i < n; i++) {
        for (auto &node : adj[i]) {
            indegree[node]++;
        }
    }
    long long sum = 0;
        sort(indegree.begin(),indegree.end());
        for(int i = 0;i<=n-1;i++){
            sum+=(long long)((i+1)*indegree[i]);
        }
        return sum;
    }
};
