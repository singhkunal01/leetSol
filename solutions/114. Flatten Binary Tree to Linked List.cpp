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
    void flatten(TreeNode* root) {
stack<TreeNode *> st({root});
while(!st.empty()) {
    TreeNode *currNode = st.top();
    st.pop();
    if(currNode->right) st.push(currNode->right);
    if(currNode->left) st.push(currNode->left);
    //check whether the stack is empty or not if not then simply do this :
    if(!st.empty()) currNode->right = st.top();
    currNode->left = NULL;
}
    }
};
