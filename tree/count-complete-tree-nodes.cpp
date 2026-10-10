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
    void Count(TreeNode* root,vector<int>& x){
        if(root==nullptr)
        return;
        x[0]++;
        Count(root->left,x);
        Count(root->right,x);
    }
    int countNodes(TreeNode* root) {
        vector<int> x;
        x.push_back(0);
        Count(root,x);
        return x[0];
    }
};