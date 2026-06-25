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
    bool flag = false ; 

    void solve(int sum , TreeNode* root, int targetSum){    
        if(!root) return ; 

        sum += root->val ;
        if(!root->left && !root->right && sum==targetSum) flag = true;  
        if(root->left) solve(sum, root->left, targetSum); 
        if(root->right) solve(sum, root->right, targetSum); 
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        solve(0, root, targetSum); 
        return flag ; 
    }
};