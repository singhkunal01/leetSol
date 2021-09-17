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
​
public:
    TreeNode* searchBST(TreeNode* root, int NodeToFind) {
    if(root == NULL) return NULL;
        TreeNode *curr = root;
    if(root->val < NodeToFind) curr = searchBST(root->right, NodeToFind);
    else if(root->val > NodeToFind) curr = searchBST(root->left, NodeToFind);
    else if(root->val == NodeToFind) return curr;
    else return NULL;
    return curr;
    }
};
