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

//----------------------------  U S I N G   S T A C K S  --------------------------

class Solution {
public:
    void flatten(TreeNode* root) {
stack<TreeNode *> st({root});
while(!st.empty()) {
    TreeNode *currNode = st.top();
    st.pop();
    if(currNode->right) st.push(currNode->right);
    if(currNode->left) st.push(currNode->left);
    //check whether the stack is empty or not if not then simply do this :
    if(!st.empty()) currNode->right = st.top();
    currNode->left = NULL;
}
    }
};

//----------------------------  U S I N G   R E C U R S I O N --------------------------

class Solution {
public:
Node *prevNode = NULL; //globally declared
void flattenIntoALinkedList(Node *root){
if(root == NULL) return;
flattenIntoALinkedList(root->right);
flattenIntoALinkedList(root->left);
root->right = prevNode;
root->left = NULL;
prevNode = root;
}
};


//-----------------------  U S I N G   M O R R I S  T R A V E R S A L   S I M I L A R   A P P R O A C H   ( O P T I M A L)  -------------------------

void flattenIntoALinkedList(TreeNode *root){
if(root == NULL) return;
TreeNode *curr = root;
while(curr)
{
    if(curr->left) {
        TreeNode *prev = curr->left;
        while(prev->right) prev = prev ->right;
        prev->right = curr ->right;
        curr->right = curr->left;
        curr->left = NULL ; //cut the thread
    }
    curr = curr->right;
}
}

// TC:O(N)
// SC:O(1)



