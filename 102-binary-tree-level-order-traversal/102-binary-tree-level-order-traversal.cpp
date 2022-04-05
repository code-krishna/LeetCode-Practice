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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        
        levelOrderUtil(root, res, 0);
        
        return res;
        
    }
    
    void levelOrderUtil(TreeNode *root, vector<vector<int>> &res, int level){
        
        if(root==NULL) return;
        
        if(res.size() > level){
            res[level].push_back(root->val);
        }
        else{           
            res.push_back({root->val});
        }
        
        levelOrderUtil(root->left, res, level+1);
        levelOrderUtil(root->right, res, level+1);
        
    }
};