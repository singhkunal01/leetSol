/**
 * Definition for a binary tree Treenode.
 * struct TreeTreeNode {
 *     int val;
 *     TreeTreeNode *left;
 *     TreeTreeNode *right;
 *     TreeTreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeTreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeTreeNode(int x, TreeTreeNode *left, TreeTreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    pair<int,int> giveMaxValuesAndIndex(vector<int> &nums,int start,int end){
    int idx = start, maxValue;
    for(int i = start ;i<end;i++){
        if(nums[idx] < nums[i]){
            idx = i;
        }
    }
            maxValue=nums[idx];
    return {idx,maxValue};
}
TreeNode *buildATree(int start, int end, vector<int> &nums) {
    if(start == end) return NULL;
    auto values = giveMaxValuesAndIndex(nums,start,end);
    int maxValue = values.second, idx = values.first;
    TreeNode *root = new TreeNode(maxValue);
    root->left = buildATree(start, idx, nums);
    root->right =  buildATree(idx + 1, end, nums);
    return root;
}
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return buildATree(0,nums.size(),nums);
    }
};
