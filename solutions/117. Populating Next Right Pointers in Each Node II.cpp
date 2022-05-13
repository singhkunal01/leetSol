/*
Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;
​
    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/
​
class Solution {
public:
    Node* connect(Node* root) {
    //edge case
    if (!root) return NULL;
    queue <Node*> ds({root});
    while (!ds.empty()) {
        int curr = ds.size();
        Node *dummy = new Node(0);
        while (curr--) {
            Node *top = ds.front();
            ds.pop();
            dummy->next = top;
            dummy = dummy->next;
            //if left and right does exists then
            if (top->left)ds.push(top->left);
            if (top->right)ds.push(top->right);
        }
    }
    return root;
    }
};
