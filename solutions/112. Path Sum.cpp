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
    void giveSumToEveryNode(TreeNode *root, vector<int> &res, int sum, int targetSum,bool &isTrueOrnot) {
    if(!root) return ;
    res.push_back(root->val);
    if(!root->left and !root->right) {
        sum = accumulate(res.begin(), res.end(),0);
        if(sum == targetSum) {
            isTrueOrnot = true;
            return;
        }
    }
    giveSumToEveryNode(root ->left, res, sum, targetSum,isTrueOrnot);
    giveSumToEveryNode(root ->right, res, sum, targetSum,isTrueOrnot);
    res.pop_back();
}
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
           vector<int> res; bool isTrueOrnot=false;
 if(!root) return false;
 giveSumToEveryNode(root,res,0,targetSum,isTrueOrnot);
 return isTrueOrnot;
        
    }
};
