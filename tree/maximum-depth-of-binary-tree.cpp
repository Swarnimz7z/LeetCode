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
    int Traverse(TreeNode* root,int n,int m){
        if(root==nullptr)
        return max(n,m);

        int x=Traverse(root->left,n+1,m+1);

        int y=Traverse(root->right,n+1,m+1);

        return max(x,y);
    }
    int maxDepth(TreeNode* root) {
        if(root==nullptr)
        return 0;
        int x=Traverse(root,0,0);
        return x;
    }
};