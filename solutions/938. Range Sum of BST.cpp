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
    private: int sum = 0;
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        //iterative dfs method
        /*stack<TreeNode*> st;
        int sum=0;
        st.push(root);
        if(root ==NULL) return 0;
        while(!st.empty()){
            root = st.top();st.pop();
            if(root->val>=low and root->val<=high) sum+=root->val;
            if(root->right!=NULL) st.push(root->right);
            if(root->left!=NULL) st.push(root->left);
        }
        return sum;*/
        //recursive dfs method
    if (!root) return 0;
    if (root->val >= low and root ->val <= high ) sum += root->val;
    rangeSumBST(root->left, low, high);
    rangeSumBST(root->right, low, high);
    return sum;
    }
};
