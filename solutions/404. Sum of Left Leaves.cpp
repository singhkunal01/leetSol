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
    int sumOfLeftLeaves(TreeNode* root) {
     if(root == 0) return 0;
     int sum = 0;
     stack<TreeNode*> st;      
     st.push(root);
     while(!st.empty()) {
        TreeNode* curr =  st.top(); 
        st.pop();            
        if(curr->right) st.push(curr->right);
        if(curr->left) {
            st.push(curr->left); 
            if(!curr->left->left && !curr->left->right)
              sum += curr->left->val; //because we want to add the left leaves only
        }        
     }  
        return sum;
    }
};
