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
    bool isLeafNode(TreeNode *root){
return !root->left and !root->right;
}
​
void givePaths(TreeNode *root,string store, vector<string> &res){
if(!root) return;
if(isLeafNode(root)) {
    res.push_back(store + to_string(root->val));
}
givePaths(root->left,store + to_string(root->val)+"->", res);
givePaths(root->right,store + to_string(root->val)+"->", res);
}
public:
    vector<string> binaryTreePaths(TreeNode* root) {
          vector<string> ans;
 givePaths(root,"",ans);
 return ans;
    }
};
