/**
 * Definition for a binary tree node.
 * struct TreeTreeNode {
 *     int val;
 *     TreeTreeNode *left;
 *     TreeTreeNode *right;
 *     TreeTreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeTreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeTreeNode(int x, TreeTreeNode *left, TreeTreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    int result = 0;
    int helper(TreeNode *root) {
    if (!root) return 0;
    int leftSubtreeSum = helper(root->left);
    int rightSubtreeSum = helper(root->right);
    int tiltNess = abs(leftSubtreeSum - rightSubtreeSum);
    result += tiltNess;
    return leftSubtreeSum + rightSubtreeSum + root->val;
​
}
public:
    int findTilt(TreeNode* root) {
        helper(root);
        return result;
    }
};
