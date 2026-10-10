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
    void Traversal(TreeNode* root,vector<int>&z,int v){
        if(root==nullptr)
        return;
        if(z.size()<=v){
            z.resize(v+1);
        }
        z[v]+=root->val;
        Traversal(root->left,z,v+1);
        Traversal(root->right,z,v+1);
    }
    int deepestLeavesSum(TreeNode* root) {
        vector<int> z(1,0);
        Traversal(root,z,0);
        return z[z.size()-1];
    }
};