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
    void giveLeafNode(TreeNode *root1,vector<int> &res1){
    if(!root1->left and !root1->right) {
        res1.push_back(root1->val);
        return;
    }
    if(root1->left) giveLeafNode(root1->left,res1);
    if(root1->right)  giveLeafNode(root1->right,res1);
}
void giveLeafNode2(TreeNode *root2,vector<int> &res2){
    if(!root2->left and !root2->right) {
        res2.push_back(root2->val);
        return;
    }
    if(root2->left) giveLeafNode2(root2->left,res2);
    if(root2->right)  giveLeafNode2(root2->right,res2);
}
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
                vector<int> res1,res2;
       giveLeafNode(root1,res1);
      giveLeafNode2(root2,res2);
       if(size(res1)!=size(res2)) return false;
       for(int node = 0;node<size(res1);node++){
        if(res1[node]!=res2[node]) return false;
       }
       return true;
    }
};
