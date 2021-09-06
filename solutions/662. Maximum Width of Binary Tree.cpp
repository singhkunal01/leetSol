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
    int widthOfBinaryTree(TreeNode* root) { 
    queue<pair<TreeNode *, int>> qu;
    int maxWidth = INT_MIN;
    qu.push({root, 0});
    while(!qu.empty())
    {
        int sizeOfQueue = size(qu), firstID, secondID, minIdx = qu.front().second;
        for(int i = 0 ; i < sizeOfQueue; i++)
        {
            auto content = qu.front();
            qu.pop();
            TreeNode *temp = content.first;
            int idx = content.second - minIdx;
           if( i == 0) firstID = idx;
           if( i == sizeOfQueue-1) secondID = idx;
            if(temp->left) qu.push({temp->left, 2 * idx + 1});
            if(temp->right) qu.push({temp->right, 2 * idx + 2});
        }
        maxWidth = max(maxWidth, secondID - firstID + 1);
    }
    return maxWidth;
    }
};
