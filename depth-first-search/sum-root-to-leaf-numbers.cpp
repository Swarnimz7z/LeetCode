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
    void Traversal(TreeNode* root,int s,vector<int> &x){
        if(root==nullptr){
        return;
        }
        s=s*10+root->val;
        if(root->left==nullptr && root->right==nullptr){
            x[0]=x[0]+s;
            return;
        }
        Traversal(root->left,s,x);

        Traversal(root->right,s,x);
    }
    int sumNumbers(TreeNode* root) {
        int s=0;
        vector<int> x(1,0);
        Traversal(root,s,x);
        return x[0];
    }
};