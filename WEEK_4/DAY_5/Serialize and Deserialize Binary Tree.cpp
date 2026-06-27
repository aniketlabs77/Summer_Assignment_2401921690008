/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "N" ; 
        return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right); 
    }

    
    // Decodes your encoded data to tree
    

    int i = -1 ; 

    TreeNode* build(vector<string>& arr){
        i++ ; 
        if(i >= arr.size() || arr[i] == "N")
        return NULL; 

        TreeNode* node = new TreeNode(stoi(arr[i])); 
        node->left = build(arr); 
        node->right = build(arr); 
        
        return node ; 
    }
    TreeNode* deserialize(string data) {
        vector<string> tempArr ; 

        string temp ; 
        for(auto it : data){
            if(it == ','){
                tempArr.push_back(temp); 
                temp = ""; 
            }
            else{
                temp += it ; 
            }
        }

        return build(tempArr); 
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));