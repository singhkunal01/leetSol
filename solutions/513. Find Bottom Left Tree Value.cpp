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
    int findBottomLeftValue(TreeNode* root) {
        if(root==NULL) return 0;
vector<int> ans;
queue<TreeNode*> q;
q.push(root);
while(!q.empty()){
    int n = q.size();
    vector<int> eachLevel;
    for(int i=0;i<n;i++){
        root = q.front(); q.pop();
        if(root->left !=NULL) q.push(root->left);
        if(root->right !=NULL) q.push(root->right);
        eachLevel.push_back(root->val);
    }
    int data = *eachLevel.begin();
    ans.push_back(data);
}
       int data = *(ans.end()-1);
        return data;
    }
};
