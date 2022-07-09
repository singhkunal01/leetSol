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
    
    bool leafNode(TreeNode* root) {
        return root->left == NULL && root->right == NULL;
    }
    
    int check(int val, int orVal, int andVal){
        
        if (val == 2) { return orVal | andVal; }
        if (val == 3) { return orVal & andVal; }
        return 0;
    }
​
    bool evaluateTree(TreeNode* root) {
        if (!root)  return 0;
        if (leafNode(root))  return root->val;
        
        int left = evaluateTree(root->left);
        int right = evaluateTree(root->right);
        return check(root->val, left, right);
    }
};
