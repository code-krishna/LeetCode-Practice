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
        
        if(root==NULL) return NULL;
        
        if(root->left==NULL && root->right==NULL) return root;
        
        if(root->left!=NULL && root->right!=NULL){
            root->left->next = root->right;
        }
        
        if(root->next!=NULL){
            if(root->right!=NULL){
                if(root->next->left!=NULL){
                    root->right->next=root->next->left;
                }
                else if(root->next->right!=NULL){
                    root->right->next=root->next->right;
                }
            }
            else if(root->left!=NULL){
                if(root->next->left!=NULL){
                    root->left->next=root->next->left;
                }
                else if(root->next->right!=NULL){
                    root->left->next=root->next->right;
                }
            }
        }
        
        connect(root->left);
        
        connect(root->right);
        
        return root;
        
    }
};