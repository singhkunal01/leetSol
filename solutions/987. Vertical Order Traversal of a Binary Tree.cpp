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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
         vector<vector<int>> ans;
  if(!root) return ans;
  queue<pair<TreeNode*,pair<int,int>>> ds;
  map<int,map<int,multiset<int>>> bucket;
  ds.push({root,{0,0}});
while(!ds.empty())
{
    auto qu = ds.front();
    ds.pop();
    TreeNode *temp = qu.first;
    int vertical = qu.second.first, level = qu.second.second;
    bucket[vertical][level].insert(temp->val);
    if(temp->left) ds.push({temp->left, {vertical - 1, level + 1}});
    if(temp->right) ds.push({temp->right, {vertical + 1, level + 1}});
}
  for(auto &x:bucket){
    vector<int> res;
    for(auto &y:x.second){
      res.insert(res.end(),y.second.begin(),y.second.end());
    }
    ans.push_back(res);
  }
  return ans;
    }
};
