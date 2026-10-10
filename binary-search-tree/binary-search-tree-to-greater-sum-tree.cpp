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
    void Traversal(TreeNode* root,int &s){
        if(root==nullptr)
        return;
        Traversal(root->right,s);
        s=s+root->val;
        root->val=s;
        Traversal(root->left,s);
    }
    TreeNode* bstToGst(TreeNode* root) {
        int s=0;
        Traversal(root,s);
        return root;
    }
};