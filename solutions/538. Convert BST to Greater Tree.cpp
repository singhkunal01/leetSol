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
 */   class Solution {
     
public:
     void helper(TreeNode *root,int &sum){
         if(!root) return;
         if(root->right)helper(root->right,sum);
         root->val = (sum+=root->val);
         if(root->left)helper(root->left,sum);
     }
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        helper(root,sum);
        return root;
    }
};
