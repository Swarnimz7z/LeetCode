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
    void Traverse(TreeNode* root,int x,vector<int> &z){
        if(root==nullptr)
        return;
        if(root->left==nullptr && root->right==nullptr)
        z[0]=min(z[0],x);
        x++;
        Traverse(root->left,x,z);
        Traverse(root->right,x,z);
    }
    int minDepth(TreeNode* root) {
        if(root==nullptr)
        return 0;
        int x=1;
        vector<int> z(1,INT_MAX);
        Traverse(root,x,z);
        return z[0];
    }
};