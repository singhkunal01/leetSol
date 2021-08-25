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
    int maxDepth(TreeNode* root) {
         vector<vector<int>> ans;
    if(root==NULL) return 0;
    queue<TreeNode*> bucket;
    bucket.push(root);
    int ct=0;
    while(!bucket.empty()){
    int sz = bucket.size();
    vector<int> everyLevel;
    for(int i=0; i<sz;i++){
      TreeNode *eachNode = bucket.front();
      bucket.pop();
      if(eachNode->left!=NULL) bucket.push(eachNode->left);
      if(eachNode->right!=NULL) bucket.push(eachNode->right);
      everyLevel.push_back(eachNode->val);
   }
   ct++;
   ans.push_back(everyLevel);
}
return ct;
    }
};
