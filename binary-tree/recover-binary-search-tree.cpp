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
    void Traversal(TreeNode* root,vector<TreeNode*>&z){
        if(root==nullptr){
            return;
        }

        Traversal(root->left,z);
        
        z.push_back(root);
        
        Traversal(root->right,z);
    }
    void recoverTree(TreeNode* root) {
        vector<TreeNode*> z;
        Traversal(root,z);
        int n=z.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(z[i]->val>z[j]->val)
                swap(z[i]->val,z[j]->val);
            }
        }
    }
};