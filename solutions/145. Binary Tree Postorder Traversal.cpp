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

//RECURSIVE METHOD
class Solution {
public:
    void postorder(TreeNode* root,vector<int> &res){
 if(root == NULL) return;
  postorder(root->left,res);
  postorder(root->right,res);
  res.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode* root) {
  vector<int> res;
  postorder(root,res);
  return res;
}
};


// iterative postorder traversal using 2 stacks
void iterativePostorderBy2Stacks(Node *root){
vector<int> ans;
if(root==NULL)return ;
stack<Node*> st1,st2;
st1.push(root);
while(!st1.empty()){
Node *temp = st1.top();
st1.pop();
st2.push(temp);
if(temp->left!=NULL) st1.push(temp->left);
if(temp->right!=NULL) st1.push(temp->right);
}
while(!st2.empty()){
  ans.push_back(st2.top()->val);
  st2.pop();
}
for(auto &x:ans) cout << x<<" -> ";
}

// iterative postorder traversal using vector and stack
void iterativePostorderByVector(Node *root){
stack<Node*> st1;
vector<int> st2;
st1.push(root);
while(!st1.empty()){
Node *temp = st1.top();
st1.pop();
st2.push_back(temp->val);
if(temp->left!=NULL) st1.push(temp->left);
if(temp->right!=NULL) st1.push(temp->right);
}
reverse(st2.begin(),st2.end());
for(auto &x:st2) cout << x<<" -> ";
}

//iterative solution using 1 stack : TC : O(2N) and SC: O(N)

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> res;
    if(root ==  NULL) return res;
    stack<TreeNode *> st;
    TreeNode *currentValue = root;
    while(currentValue !=NULL or !st.empty())
    {
        if(currentValue!=NULL){
            st.push(currentValue);
            currentValue=currentValue->left;
        }
        else
        {
            TreeNode *temp=st.top()->right;
            if(temp == NULL)
            {
                temp = st.top();
                st.pop();
                res.push_back(temp->val);
                while(!st.empty() and temp == st.top()->right )
                {
                    temp = st.top();
                    st.pop();
                    res.push_back(temp->val);
                }
            }
            else
             {  
                currentValue = temp;
             }
        }
 }
        return res;
    }
};
