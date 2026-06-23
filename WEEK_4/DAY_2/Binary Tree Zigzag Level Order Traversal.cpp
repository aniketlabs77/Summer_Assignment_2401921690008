/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == nullptr)
            return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;

        while (!q.empty()) {
            int sz = q.size();
            vector<int> temp;

            while (sz--) {
                TreeNode* x = q.front();
                q.pop();

                temp.push_back(x->val);

                if (!leftToRight) {
                    if (x->left)
                        q.push(x->left);
                    if (x->right)
                        q.push(x->right);
                } else {
                    if (x->right)
                        q.push(x->right);
                    if (x->left)
                        q.push(x->left);
                    
                }
            }

            // if(!leftToRight){
            //     reverse(temp.begin(), temp.end());
            // }
            leftToRight = !leftToRight;
            res.push_back(temp);
            temp.clear();
        }

        return res;
    }
};