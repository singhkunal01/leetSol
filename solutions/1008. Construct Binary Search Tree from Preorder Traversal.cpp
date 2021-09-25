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
    TreeNode *buildBstFromPreorder(vector<int> &preOrder, int &startingPtr, int endingPtr) {
    if(startingPtr == size(preOrder) or preOrder[startingPtr] > endingPtr)
        return NULL; //it handles the case when the given vector is empty or when the ending pointer value is less than the any value in whole vector then it get returns
//now the main code get started ,if the vector is in preorder then obviously value at 0th index is the root of tree
    TreeNode *root = new TreeNode(preOrder[startingPtr++]);
    // print(root->val)
    root->left = buildBstFromPreorder(preOrder, startingPtr, root->val);
    root->right = buildBstFromPreorder(preOrder, startingPtr, endingPtr);
    return root;
}
public:
    TreeNode* bstFromPreorder(vector<int>& preOrder) {
 int startingPtr = 0;
       return buildBstFromPreorder(preOrder,startingPtr,INT_MAX);
    }
};
