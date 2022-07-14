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
TreeNode *constructTree(vector<int>& pre, int preStart, int preEnd, vector<int>& ino, int inStart, int inEnd, map<int, int>&track) {
​
//if preStart crosses the range and inStart then return
    if (preStart > preEnd or inStart > inEnd)return NULL;
//now as we know that the  for making root we see the topmost value in preorder container ,so
    TreeNode *root = new TreeNode (pre[preStart]);
    //now we get our main root and through which we can find the total number of left and right nodes from the root
    int positionOfRoot = track[root->val] ;
    int totalNodesLeft = positionOfRoot - inStart;
​
    root->left = constructTree(pre, preStart + 1, preStart + totalNodesLeft, ino, inStart, positionOfRoot - 1, track);
    root->right = constructTree(pre, preStart + totalNodesLeft + 1, preEnd, ino, positionOfRoot + 1, inEnd, track);
    return root;
​
}
public:
    TreeNode* buildTree(vector<int>& pre, vector<int>& ino) {
     map<int, int>keepTrack;
    int n = ino.size();
    for (int i = 0; i < n ; i++) {
        keepTrack[ino[i]] = i;
    }
    return constructTree(pre, 0, n - 1, ino, 0, n - 1, keepTrack);
    }
};
