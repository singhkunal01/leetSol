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
    vector<vector<int>> levelOrder(TreeNode* root) {
   queue<TreeNode*> bucket;
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    bucket.push(root);
    while(!bucket.empty()){
        int sz = size(bucket);
        vector<int> everyLevel;
        for(int i=0; i<sz;i++){
            TreeNode *eachNode = bucket.front();
            bucket.pop();
            if(eachNode->left!=NULL) bucket.push(eachNode->left);
            if(eachNode->right!=NULL) bucket.push(eachNode->right);
            everyLevel.push_back(eachNode->val);
    }
    ans.push_back(everyLevel);
    }
    return ans; 
    }
};
