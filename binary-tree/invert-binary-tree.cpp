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
    void Traverse(TreeNode* root){
        if(root==nullptr)
        return;

        TreeNode* x=nullptr;
        TreeNode* y=nullptr;

        if(root->left!=nullptr)
        x=root->left;
        if(root->right!=nullptr)
        y=root->right;

        Traverse(root->left);
        Traverse(root->right);
        root->left=y;
        root->right=x;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr)
        return root;

        Traverse(root);
        return root;
    }
};