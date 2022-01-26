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
    private:
void allNodes(TreeNode *root1, priority_queue<int, vector<int> , greater<int>> &pq) {
    if (!root1) return;
    pq.push(root1->val);
    allNodes(root1->left, pq);
    allNodes(root1->right, pq);
}
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    priority_queue<int, vector<int> , greater<int>> pq;
    allNodes(root1, pq);
    allNodes(root2, pq);
    vector<int> result;
    while (!pq.empty()) {
        result.push_back(pq.top()); pq.pop();
    }
    return result;
    }
};
