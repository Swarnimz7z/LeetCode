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
        if(root==nullptr)
        return;
        if(z.size()<=n){
            z.resize(n+1);
            
        }
        z[n]+=root->val;

        Traverse(root->left,z,n+1);

        Traverse(root->right,z,n+1);

    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long> z;
        Traverse(root,z,0);
        sort(z.begin(),z.end());
        int n=z.size();
        if((n-k)<0)
        return -1;
        return z[z.size()-k];
    }
};