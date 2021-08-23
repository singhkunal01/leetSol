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


//RECURSIVE SOLUTION
class Solution {
public:
    // started on date - Aug 22,2021
        vector<int> res;
    void inorder(TreeNode* root){
       if(root == NULL) return;
        inorder(root->left);
        res.push_back(root->val);
        inorder(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return res;
    }
};


//ITERATIVE SOLUTION (FUNCTION)
// iterative inorder traversal
void iterativeInorder(Node *root){
stack<Node*> st;
Node *temp = root;
while(true){
  if(temp!=NULL) {
      st.push(temp);
      temp=temp->left;
    }
    else{
      if(st.empty()==1) 
        break;
      temp=st.top();
      st.pop();
      cout<<temp->val<<" -> ";
      temp=temp->right;
    }
}
}
