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
    int maxLevelSum(TreeNode* root) {
            queue<pair<TreeNode*,int>> ds;
   vector<pair<int,int>> track;
 ds.push({root,1});
 int sumAtEachLevel,level;
 while(!ds.empty()){
    int sizeOfds = size(ds);
    sumAtEachLevel = 0;
    for(int i = 0;i<sizeOfds;i++){
        auto dataOfds = ds.front(); ds.pop();
        TreeNode *tempRoot = dataOfds.first;
        level = dataOfds.second;
        sumAtEachLevel += tempRoot->val;
        if(tempRoot->left) ds.push({tempRoot->left,level+1});
        if(tempRoot->right) ds.push({tempRoot->right,level+1});
}
track.push_back({sumAtEachLevel,level});
}
auto maxPair = *max_element(track.begin(),track.end());
if(maxPair.first==root->val) return 1;
else 
return maxPair.second;
    }
};
