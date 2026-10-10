/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* Traverse(TreeNode* root,int &p,int &q){
        if(root==nullptr)
        return nullptr;

        if((root->val==p || root->val==q)){
            return root;
        }
        TreeNode* left=Traverse(root->left,p,q);

        TreeNode* right=Traverse(root->right,p,q);

        if(left!=nullptr && right!=nullptr)
        return root;

        if(left!=nullptr)
        return left;
        else
        return right;

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans=root;
        return Traverse(root,p->val,q->val);
        
    }
};