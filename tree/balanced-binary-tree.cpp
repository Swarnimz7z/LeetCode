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
    int Depth(TreeNode* root,int x,bool &z){
        if(root==nullptr)
        return x-1;

        int s=Depth(root->left,x+1,z);

        int v=Depth(root->right,x+1,z);
        
        if(abs(s-v)>1)
        z=false;
        return max(s,v);
    }
    bool isBalanced(TreeNode* root) {
        bool z=true;
        Depth(root,1,z);
        return z;

    }
};