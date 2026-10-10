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
    void Traverse(TreeNode* root,vector<vector<int>> &z,int n){
        if(z.size()<=n){
            z.resize(n+1);
        }
        if(root==nullptr)
        return;
        if(root->left!=nullptr)
        z[n].push_back(root->left->val);

        if(root->right!=nullptr)
        z[n].push_back(root->right->val);

        Traverse(root->left,z,n+1);

        Traverse(root->right,z,n+1);

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> z;
        if(root==nullptr)
        return z;
        vector<int> x={root->val};
        z.push_back(x);
        Traverse(root,z,1);
        z.resize(z.size()-2);
        return z;
    }
};