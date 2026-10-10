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
    void Traversal(TreeNode* root,vector<int>&z){
        if(root==nullptr){
            z.push_back(101);
            return;
        }
        z.push_back(root->val);
        Traversal(root->left,z);
        
        Traversal(root->right,z);

    }
    void Traversalz(TreeNode* root,vector<int>&z){
        if(root==nullptr){
            z.push_back(101);
            return;
        }
        z.push_back(root->val);
        Traversalz(root->right,z);
        
        Traversalz(root->left,z);


    }
public:
    bool isSymmetric(TreeNode* root) {
        vector<int> z;
        vector<int> v;
        if(root->left!=nullptr);
        Traversal(root->left,z);
        if(root->right!=nullptr);
        Traversalz(root->right,v);
        return z==v; 
    }
};