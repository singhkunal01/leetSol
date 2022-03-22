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
     void preOrderHelper(Node *root,vector<int> &result){
        if(!root) return;
        result.push_back(root->val);
        for(auto node:root->children){
            preOrderHelper(node,result);
        }
    }
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        preOrderHelper(root,res);
        return res;
    }
};
