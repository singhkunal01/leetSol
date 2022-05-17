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
    private:
    TreeNode *res;
    void inorderHelper(TreeNode* original, TreeNode* cloned, TreeNode* target){
        if(original==NULL)return;
        inorderHelper(original->left,cloned->left,target);
        if(original==target) res=cloned;
        inorderHelper(original->right,cloned->right,target);
    }
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        inorderHelper(original,cloned,target);
        return res;
    }
};
