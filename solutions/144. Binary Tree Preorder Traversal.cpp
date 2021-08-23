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

//ITERATIVE SOLUTION
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
         if(root==NULL) return res;
stack<TreeNode*> st;
st.push(root);
while(!st.empty()){
  root = st.top();
  st.pop();
  res.push_back(root->val);
  if(root->right!=NULL) st.push(root->right);
  if(root->left!=NULL) st.push(root->left);
    }
        return res;
    }
};

//RECURSIVE SOLUTION

class Solution {
public:
void preorder(TreeNode *root,vector<int> &res){
if(root==NULL)
return;
res.push_back(root->val);
preorder(root->left);
preorder(root->right);
}
vector<int> preorderTraversal(TreeNode* root) {
   vector<int> res;
    if(root==NULL) return res;
preorder(root,res);
   return res;
    }
};
