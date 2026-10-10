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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=new TreeNode(preorder[0]);
        int n=preorder.size();
        for(int i=1;i<n;i++){
            TreeNode* x=root;
            while(true){
                if(preorder[i]>x->val){
                    if(x->right==nullptr){
                    TreeNode* v=new TreeNode(preorder[i]);
                    x->right=v;
                    break;
                }
                else
                x=x->right;
                }
                else if(preorder[i]<x->val){
                if(x->left==nullptr){
                    TreeNode* v=new TreeNode(preorder[i]);
                    x->left=v;
                    break;
                }
                else 
                x=x->left;
                }
            }
        }
        return root;
    }
};