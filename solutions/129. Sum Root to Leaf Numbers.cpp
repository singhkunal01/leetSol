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
    private:
 bool isLeafNode(TreeNode *root){
    return !root->left and !root->right;
}
void givePathForEachNode(TreeNode *root,string s,vector<string> &res){
    if(!root) return ;
    s += (to_string( root->val));
    if(isLeafNode(root)) {
        res.push_back(s);
    }
    givePathForEachNode(root->left, s, res);
    givePathForEachNode(root->right, s, res);
}
public:
 int sumNumbers(TreeNode *root) {
     int totalSum = 0;
     vector<string> res;
     givePathForEachNode(root, "", res);
     for(auto s : res) {
         string temp = s;
         totalSum += stoi(temp);
     }
     return totalSum;
 }
};
