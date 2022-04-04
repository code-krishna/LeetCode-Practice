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
        
        int val1 = root1!=NULL ? root1->val : 0;
        int val2 = root2!=NULL ? root2->val : 0;
        
        root1->val = val1 + val2;
        
        TreeNode *ptr1 = root1!=NULL ? root1->left : NULL;
        TreeNode *ptr2 = root2!=NULL ? root2->left : NULL;
        
        root1->left = mergeTrees(ptr1, ptr2);
        
        ptr1 = root1!=NULL ? root1->right : NULL;
        ptr2 = root2!=NULL ? root2->right : NULL;
        
        root1->right = mergeTrees(ptr1, ptr2);
        
        
        return root1;
        
    }
};