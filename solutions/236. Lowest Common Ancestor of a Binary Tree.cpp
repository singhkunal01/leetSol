/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
  
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root or root == p or root == q) return root;
      TreeNode* ans1 =  lowestCommonAncestor(root->left,p,q);
       TreeNode* ans2= lowestCommonAncestor(root->right,p,q);
        if(!ans1) return ans2;
       else if(!ans2) return ans1;
else return root;
​
    }
};
