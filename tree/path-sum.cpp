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
    bool z=false;
    void Traverse(TreeNode* root,int &s,int x){
        if(root==nullptr||z)
        return;

        x+=root->val;
        if(root->left==nullptr && root->right==nullptr){
            if(s==x)
            z=true;
            return;
        }
        Traverse(root->left,s,x);
        Traverse(root->right,s,x);

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root!=nullptr)
        Traverse(root,targetSum,0);
        return z;
    }
};