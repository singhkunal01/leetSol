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
    bool checker(TreeNode *root,TreeNode *min,TreeNode *max){
        if(!root) return true;
        if(min and root->val <= min->val) return false;
        if(max  and root->val >= max->val) return false;
        bool leftCheck = checker(root->left, min, root);
        bool rightCheck = checker(root->right, root, max);
        return leftCheck && rightCheck;
    }
public:
    bool isValidBST(TreeNode* root) {
if(!root) return 0;
        return checker(root,NULL,NULL);
    }
};
