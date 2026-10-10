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
    int Deep(TreeNode* root,int n){
        if(root==nullptr)
        return n;

        int x=Deep(root->left,n+1);

        int y=Deep(root->right,n+1);

        return max(x,y);


    }
    void Traverse(TreeNode* root,int n,int &v){
        if(root==nullptr)
        return;

        int x=Deep(root->left,0);

        int y=Deep(root->right,0);

        Traverse(root->left,0,v);

        Traverse(root->right,0,v);

        v=max(v,x+y);

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int v=0;
        Traverse(root,0,v);
        return v;
    }
};