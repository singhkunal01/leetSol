/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;
​
    Node() {}
​
    Node(int _val) {
        val = _val;
    }
​
    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
​
class Solution {
    void postOrderHelper(Node *root,vector<int> &result){
        if(!root) return;
        for(auto node:root->children){
            postOrderHelper(node,result);
        }
        result.push_back(root->val);
    }
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        postOrderHelper(root,res);
        return res;
    }
