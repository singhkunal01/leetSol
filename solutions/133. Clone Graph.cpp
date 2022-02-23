/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
//for reference - https://youtu.be/0QG3dxfqIy4
class Solution {
public:
    Node *dfs(Node *curr,unordered_map<Node*,Node*> &mp){
        //taking the adjacency list
        vector<Node*> list;
        Node *node = new Node(curr->val);
        mp[curr] = node;
        for(auto &it:curr->neighbors){
            //if it is not present in map then
            if(mp.find(it)!=mp.end())list.push_back(mp[it]);
            else list.push_back(dfs(it,mp));
        }
        node->neighbors = list;
        return node;
    }
    Node* cloneGraph(Node* node) {
