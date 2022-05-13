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
        if(!root) return NULL;
        //copy of the root
        Node *copy = root;
        while(copy){
            Node *dummy = new Node(-1);
            Node *temp = dummy;
            while(copy){
                //check whether the current node has left 
                if(copy->left){
                    temp->next = copy->left;
                    temp = temp->next;
                }
                //check whether the current Node has right
                if(copy->right){
                    temp->next = copy->right;
                    temp = temp->next;
                }
            copy = copy->next;
            }
            copy= dummy->next;
        }
return root;
    }
};
