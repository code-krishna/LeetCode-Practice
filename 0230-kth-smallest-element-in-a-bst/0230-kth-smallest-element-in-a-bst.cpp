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
private:
    void inorderTraversal(TreeNode* root, int &k, int &smallest){
        
        if(root==NULL) return;
        
        inorderTraversal(root->left, k, smallest);
        k--;
        if(k==0){
            smallest = root->val;
        }
        inorderTraversal(root->right, k, smallest);
    }

public:
    int kthSmallest(TreeNode* root, int k) {
        
        int smallest = INT_MAX;
        inorderTraversal(root, k, smallest);
        return smallest;
        
    }
};