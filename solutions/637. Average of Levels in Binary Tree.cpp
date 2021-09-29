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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> ds({root});
        vector<double> res;
        if(!root) return res;
        while(!ds.empty()){
            int sz = ds.size();
            double sum = 0;
        for(int i = 0;i<sz;i++){
        TreeNode *node = ds.front(); ds.pop();
           sum+=node->val;
          if(node->left) ds.push(node->left);
         if(node->right) ds.push(node->right);
            }
            res.push_back(sum*1.0/sz);
        }
        return res;
    }
};
