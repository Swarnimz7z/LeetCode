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
    void Traversal(vector<int>& x,TreeNode* root){
        if(root==nullptr)
        return;
        Traversal(x,root->left);
        x.push_back(root->val);
        Traversal(x,root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> x;
        Traversal(x,root);
        return x[k-1];
    }
};