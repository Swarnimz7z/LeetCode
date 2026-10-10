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
    void Traverse(TreeNode* root,vector<int> &z,int n){
        if(z.size()<=n){
            z.resize(n+1);
            z[n]=INT_MIN;
        }
        if(root==nullptr)
        return;

        if(root->left!=nullptr){
        if(z[n]<(root->left->val))
        z[n]=(root->left->val);
        }

        if(root->right!=nullptr){
        if(z[n]<(root->right->val))
        z[n]=(root->right->val);
        }

        Traverse(root->left,z,n+1);

        Traverse(root->right,z,n+1);

    }
    vector<int> largestValues(TreeNode* root) {
        vector<int> z;
        if(root==nullptr)
        return z;
        z.push_back(root->val);
        Traverse(root,z,1);
        z.resize(z.size()-2);
        return z;
    }
};