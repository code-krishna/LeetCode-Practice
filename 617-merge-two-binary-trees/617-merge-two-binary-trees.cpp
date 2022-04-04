/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
        if(root1==NULL && root2==NULL) return NULL;
        
        if(root1==NULL && root2!=NULL) return root2;
        
        if(root1!=NULL && root2==NULL) return root1;
        
        root1->val = root1->val + root2->val;
        
        if(root1->left==NULL && root2->left!=NULL){
            TreeNode *ptr = new TreeNode(0, NULL, NULL);
            root1->left = ptr;
            mergeTrees(root1->left, root2->left);
        }
        
        else if(root1->left!=NULL && root2->left==NULL){
            TreeNode *ptr = new TreeNode(0, NULL, NULL);
            root2->left = ptr;
            mergeTrees(root1->left, root2->left);
        }
        
        else if(root1->left!=NULL && root2->left!=NULL){
            mergeTrees(root1->left, root2->left);
        }
        
        if(root1->right==NULL && root2->right!=NULL){
            TreeNode *ptr = new TreeNode(0, NULL, NULL);
            root1->right = ptr;
            mergeTrees(root1->right, root2->right);
        }
        
        else if(root1->right!=NULL && root2->right==NULL){
            TreeNode *ptr = new TreeNode(0, NULL, NULL);
            root2->right = ptr;
            mergeTrees(root1->right, root2->right);
        }
        
        else if(root1->right!=NULL && root2->right!=NULL){
            mergeTrees(root1->right, root2->right);
        }
        
        return root1;
        
    }
};