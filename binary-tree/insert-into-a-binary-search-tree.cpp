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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* z=new TreeNode();
        TreeNode* temp=root;
        z->val=val;
        if(root==nullptr)
        return root=z;
        while(temp!=nullptr){
            if(temp->val<val){
                if(temp->right==nullptr){
                temp->right=z;
                break;
                }
                temp=temp->right;
            }
            else{
                if(temp->left==nullptr){
                temp->left=z;
                break;
                }
                temp=temp->left;
            }
        }
        temp=z;
        return root;
    }
};