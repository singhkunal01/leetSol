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
​
//my solution printing wrong values at [1,2]
/*  TreeNode *helpInInvertion(TreeNode *temp,TreeNode *leftNode,TreeNode *rightNode){
    if(!temp) return temp;
    if(!rightNode) return leftNode;
    if(!leftNode) return rightNode;
    swap(leftNode->val,rightNode->val);
    helpInInvertion(temp,leftNode->left,rightNode->right);
    helpInInvertion(temp,leftNode->right,rightNode->left);
    return temp;
    //called function(leetcode default)
     TreeNode *temp=root;
     if(!temp) return temp;
     if(!temp->left and !temp->right) return temp;
     temp = helpInInvertion(temp,temp->left,temp->right);
     return temp;
}*/
​
class Solution {
   void helpInInversion(TreeNode *root){
    if(!root) return;
    swap(root->left,root->right);
    helpInInversion(root->left);
    helpInInversion(root->right);
    return ;
}
public:
    TreeNode* invertTree(TreeNode* root) {
      if(!root) return root;
   helpInInversion(root);
    return root;
    }
};
