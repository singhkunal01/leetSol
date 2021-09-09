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
    int findMaxidepth(TreeNode *root){
        if(root == NULL) return 0;
        return max(findMaxidepth(root->left),findMaxidepth(root->right))+1;
    }
public:
    int deepestLeavesSum(TreeNode* root) {
       int depth = findMaxidepth(root);
      if(root == NULL) return 0;
      queue<pair<TreeNode *, int>>  ds;
      ds.push({root,1});
      int sum;
      while(!ds.empty()){
       int size = ds.size();
          sum = 0;
          for(int i = 0; i < size ; i++)
          {
        auto data = ds.front();
        ds.pop();
        TreeNode *node = data.first;
        int level = data.second;
        if(level == depth) sum+=node->val;
        if(node ->left) ds.push({node->left,level+1});
        if(node ->right) ds.push({node->right,level+1});
      }
      }
      return sum;
        
    }
};
