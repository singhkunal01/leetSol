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

// first approach by using extra space vectors of strings
class Solution {
    private:
 bool isLeafNode(TreeNode *root){
    return !root->left and !root->right;
}
void givePathForEachNode(TreeNode *root,string s,vector<string> &res){
    if(!root) return ;
    s += (to_string( root->val));
    if(isLeafNode(root)) {
        res.push_back(s);
    }
    givePathForEachNode(root->left, s, res);
    givePathForEachNode(root->right, s, res);
}
public:
 int sumNumbers(TreeNode *root) {
     int totalSum = 0;
     vector<string> res;
     givePathForEachNode(root, "", res);
     for(auto s : res) {
         string temp = s;
         totalSum += stoi(temp);
     }
     return totalSum;
 }
 };

TC: O(N)
SC:O(H); //recursive stack space(auxiliary space)


// second approach by using recursion without any extra space
 class Solution {
    int giveSum(TreeNode *root,int sum){
        if(!root) return 0;
        sum = sum*10+root->val;
        //if we reach leaf node then return the sum;
        if(not root->left and not root->right) return sum;
        return giveSum(root->left,sum)+giveSum(root->right,sum);
        
    }
public:
 int sumNumbers(TreeNode *root) {
return giveSum(root,0)    ;
 }
};

TC: O(N)
SC:O(H); //recursive stack space(auxiliary space)

//two more approach using explicit stack (iterative method ) and another one is using bfs (queue ) simple refer to :
// https://leetcode.com/problems/sum-root-to-leaf-numbers/discuss/1556417/C%2B%2BPython-Recursive-and-Iterative-DFS-%2B-BFS-%2B-Morris-Traversal-O(1)-or-Beats-100

//Fifth approach is MORRIS TRAVERSAL one :(bit confusing ) solve it later
