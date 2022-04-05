/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        if(root==NULL || (root->left==NULL && root->right==NULL)) return root;
        
        if(root->left!=NULL && root->right!=NULL){
            root->left->next = root->right;
        }
        
        if(root->next!=NULL){
            Node *ptr1 = root->next->left!=NULL ? root->next->left : root->next->right;
            Node *ptr2 = root->right!=NULL ? root->right : root->left;
            ptr2->next = ptr1;
        }
        
        connect(root->left);
        
        connect(root->right);
        
        return root;
        
    }
};