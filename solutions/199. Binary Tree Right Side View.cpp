/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void helperFunc(TreeNode *root,int level,vector<int> &ans){
        if(!root) return;
        if(level== size(ans)) ans.push_back(root->val);
        helperFunc(root->right,level+1,ans);
        helperFunc(root->left,level+1,ans);
​
}
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        helperFunc(root,0,res);
        return res;
    }
};
