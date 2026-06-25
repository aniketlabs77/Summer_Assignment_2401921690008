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
    int maxSum  = INT_MIN; 

    int sumFn(TreeNode* root){
        if(!root) return 0 ; 
        int ans = INT_MIN ; 

        int lh = sumFn(root->left); 
        int rh = sumFn(root->right); 

        
        ans = max(ans, root->val); 
        ans = max(ans, root->val + lh); 
        ans = max(ans, root->val + rh);

        maxSum = max(maxSum, ans); 
        maxSum = max(maxSum, root->val + lh + rh); 
        return ans ; 
    }

    int maxPathSum(TreeNode* root) {
        int temp = sumFn(root); 
        return maxSum ; 
    }
};