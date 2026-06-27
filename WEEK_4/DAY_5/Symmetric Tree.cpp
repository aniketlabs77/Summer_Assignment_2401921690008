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
    bool solve(TreeNode* leftt, TreeNode* rightt){

         if(!leftt && !rightt)
            return true;

        if(!leftt && rightt) return false ; 
        if(leftt && !rightt) return false ; 

        if(leftt && rightt) {
                    if(leftt->val != rightt->val) return false ; 
        
        }
        
        return solve(leftt->left, rightt->right) && solve(leftt->right, rightt->left); 


    }
    
    bool isSymmetric(TreeNode* root) {
        
        
        // if(root->left && !root->right) return false ; 
        // if(!root->left && root->right) return false ; 
        // if(root->left->val != root->right->val) return false; 
        
        
        return solve(root->left, root->right); 
    }
};