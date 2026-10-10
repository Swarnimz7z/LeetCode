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
    TreeNode* ans;

    void Traverse(TreeNode* root,int &p,int &q){
        if(root==nullptr)
        return;

        if((root->val>=p && root->val<=q)||(root->val<=p && root->val>=q)){
            return;
        }
        if(root->val>p && root->val>q){
            ans=root->left;
        Traverse(root->left,p,q);
        }

        if(root->val<p && root->val<q){
            ans=root->right;
        Traverse(root->right,p,q);
        }

    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        ans=root;
        Traverse(root,p->val,q->val);
        return ans;
    }
};