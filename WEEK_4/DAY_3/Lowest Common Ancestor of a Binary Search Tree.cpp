/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return nullptr ; 
        if(root==p || root==q) return root ; 

        TreeNode* leftSide = lowestCommonAncestor(root->left, p, q); 
        TreeNode* rightSide = lowestCommonAncestor(root->right, p, q); 

        if(rightSide && leftSide) return root ; 
        if(!rightSide && !leftSide) return nullptr ;
        if(!rightSide && leftSide) return leftSide ;
        if(rightSide && !leftSide) return rightSide ;

        return nullptr ; 
    }
};  