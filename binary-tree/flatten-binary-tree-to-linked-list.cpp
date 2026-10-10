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
    void Traversal(TreeNode* root,vector<int>&z){
        if(root==nullptr){
            return;
        }
        z.push_back(root->val);

        Traversal(root->left,z);
        
        Traversal(root->right,z);

    }
    void flatten(TreeNode* root) {
        vector<int> z;
        Traversal(root,z);
        if(root!= nullptr && root->left!=nullptr)
        root->left=nullptr;
        for(int i=1;i<z.size();i++){
            TreeNode* x=new TreeNode(z[i]);
            root->right=x;
            root=root->right;
        }
    }
};