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
    TreeNode *findRightmostNode(TreeNode *root){
if(root->right == NULL) return root;
return findRightmostNode(root->right);
}
​
TreeNode *helper(TreeNode *root){
if(root->left == NULL) return root->right;
if(root->right == NULL) return root->left;
TreeNode *rightChildren = root->right;
TreeNode *lastRightmostChildren = findRightmostNode(root->left);
lastRightmostChildren->right = rightChildren;
return root->left;
}
public:
    TreeNode* deleteNode(TreeNode* root, int target) {
        if(!root) return NULL;
if(root->val==target) return helper(root);
TreeNode *dummy = root;
while(root){
    if(root->val >target){
        if(root -> left and root->left->val ==target){
            root->left = helper(root->left);
            break;
        }
        else root = root->left;
    }
    else{
        if(root -> right and root->right->val ==target){
            root->right = helper(root->right);
            break;
        }
