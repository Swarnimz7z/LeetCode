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
        if(root==nullptr)
        return;
        if(z.size()<=n){
            z.resize(n+1);
            z[n]=-1;
        }
        if(z[n]==0)
        return;
        if(n%2==0){
        if(root->val%2==0){
            if(z[n]==-1){
            z[n]=root->val;
            }
            else if(root->val<z[n])
            z[n]=root->val;
            else
            z[n]=0;
        }
        else
        z[n]=0;
        }
        else{
        if(root->val%2==1){
            if(z[n]==-1){
            z[n]=root->val;
            }
            else if(root->val>z[n])
            z[n]=root->val;
            else
            z[n]=0;
        }
        else
        z[n]=0;
        }

        Traverse(root->left,z,n+1);

        Traverse(root->right,z,n+1);

    }
    bool isEvenOddTree(TreeNode* root) {
        vector<int> z;
        if(root->val%2==0)
        return 0;
        z.push_back(1);
        Traverse(root,z,1);
        for(auto it:z)
        if(it==0)
        return 0;
        return 1;
    }
};