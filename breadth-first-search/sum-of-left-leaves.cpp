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
    void Traverse(TreeNode* root,int &x){
        if(root==nullptr)
        return;
        if(root->left!=nullptr){
            if(root->left->left==nullptr && root->left->right==nullptr)
            x=x+root->left->val;
        }
        Traverse(root->left,x);
        Traverse(root->right,x);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int x=0;
        Traverse(root,x);
        return x;
    }
};