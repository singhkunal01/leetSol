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
public:
    int heightOfTree(TreeNode *root,int &maximum){
        if(root == NULL) return 0;
    int leftHeight = heightOfTree(root->left,maximum);
    int rightHeight = heightOfTree(root->right,maximum);
        maximum = max(maximum,leftHeight+rightHeight);
return max(leftHeight,rightHeight)+1;
}
int diameterOfBinaryTree(TreeNode *root){
int diameter = 0;
    heightOfTree(root,diameter);
return diameter; 
}
};
