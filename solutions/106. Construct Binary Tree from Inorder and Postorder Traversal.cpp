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
    TreeNode *constructATree(vector<int> &postorder, int postStart, int postEnd, vector<int> &inorder, int inStart, int inEnd, map<int, int> &trackOfNodes)
{
    if(postStart > postEnd or inStart > inEnd) return NULL;
    TreeNode *root = new TreeNode(postorder[postEnd]);
    int inRoot = trackOfNodes[root->val];
    int numberOfNodesLeft = inRoot - inStart;
    root->left = constructATree(postorder, postStart, postStart + numberOfNodesLeft - 1, inorder, inStart, inRoot - 1, trackOfNodes);
    root->right = constructATree(postorder, postStart + numberOfNodesLeft, postEnd - 1, inorder, inRoot + 1, inEnd, trackOfNodes);
    return root;
}
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
          if(size(inorder) != size(postorder)) return NULL;
    map<int, int> trackOfNodes;
    for(int i = 0; i < size(inorder); i++) trackOfNodes[inorder[i]] = i;
    TreeNode *root = constructATree(postorder, 0, postorder.size()-1, inorder, 0, inorder.size()-1, trackOfNodes);
    return root;
    }
};
