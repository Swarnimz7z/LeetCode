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
    void Traversal(TreeNode* root,vector<int>&z,int v){
        if(root==nullptr)
        return;
        if(z.size()<=v){
            z.resize(v+1);
        }
        z[v]+=root->val;
        Traversal(root->left,z,v+1);
        Traversal(root->right,z,v+1);
    }
    int maxLevelSum(TreeNode* root) {
        vector<int> z(1,0);
        Traversal(root,z,0);
        int max=INT_MIN;
        int c=0;
        int n=z.size();
        for(int i=0;i<n;i++){
            if(z[i]>max){
            max=z[i];
            c=i+1;
        }
        }
        return c;
    }
};