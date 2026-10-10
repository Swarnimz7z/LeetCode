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
            return;
        }
        z.push_back(root->val);
        Traversal(root->left,z);

        Traversal(root->right,z);

    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> z;
        Traversal(root,z);
        return z; 
    }
};