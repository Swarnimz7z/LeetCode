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
void Traverse(TreeNode* root,vector<long> &z,int n){
        if(z.size()<=n){
            z.resize(n+1);
            z[n]=-2147483648-1;
        }
        if(root==nullptr)
        return;

        if(root->left!=nullptr){
        if(z[n]==-2147483648-1)
        z[n]=(root->left->val);
        }

        if(root->right!=nullptr){
        if(z[n]==-2147483648-1)
        z[n]=(root->right->val);
        }

        Traverse(root->left,z,n+1);

        Traverse(root->right,z,n+1);

    }
    int findBottomLeftValue(TreeNode* root) {
        vector<long> z;
        z.push_back(root->val);
        Traverse(root,z,1);
        z.resize(z.size()-2);
        return z[z.size()-1];
    }
};