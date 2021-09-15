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
    TreeNode *constructATree(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd, map<int, int> &trackOfNodes)
{
    if(preStart > preEnd or inStart > inEnd) return NULL;
    TreeNode *root = new TreeNode(preorder[preStart]);
    int inRoot = trackOfNodes[preorder[preStart]];
    int numberOfNodesLeft = inRoot - inStart;
    root->left = constructATree(preorder, preStart + 1, preStart + numberOfNodesLeft, inorder, inStart, inRoot - 1, trackOfNodes);
    root->right = constructATree(preorder, preStart + numberOfNodesLeft+1, preEnd, inorder, inRoot + 1, inEnd, trackOfNodes);
    return root;
}
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    if(size(inorder) != size(preorder)) return NULL;
    map<int, int> trackOfNodes;
    for(int i = 0; i < size(inorder); i++) trackOfNodes[inorder[i]] = i;
    TreeNode *root = constructATree(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1, trackOfNodes);
    return root;
    }
};
