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
//first solution - brute force 
//TC: O(2N+NlogN)
//SC: O(N) excluding recursion stack space
​
//second solution - optimal : TC : O(N) & SC: O(1)
class Solution {
private:
    TreeNode *first,*prev,*mid,*last;
private:
    void inorder(TreeNode *root){
    if(!root)  return;
    inorder(root->left);
    //now check both the cases: 
    // 1. If both the nodes are not adjacent
    // 2 . If both the nodes are adjacent
    if(prev!=NULL and root->val < prev->val){
        if(first==NULL)//first case
        {
            first = prev,mid = root;
        }
        else{
            last = root;
        }
    }
        prev = root;
    inorder(root->right);
}
 
    public:
    void recoverTree(TreeNode* root) {
        first=mid=prev=last = NULL;
        prev = new TreeNode(INT_MIN);
        inorder(root);
// if the first case which means there are two values which are not adjacent that are first and last
        if(first and last) swap(first->val, last->val);
        else if(first and mid) swap(first->val , mid->val);
    }
};
