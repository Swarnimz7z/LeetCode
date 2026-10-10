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
    void Traverse(TreeNode* root,vector<int>& x){
        if(root==nullptr)
        return;
        Traverse(root->left,x);
        x.push_back(root->val);
        Traverse(root->right,x);
        
    }
    bool isValidBST(TreeNode* root) {
        vector<int> x;
        Traverse(root,x);
        vector<int> y=x;
        sort(y.begin(),y.end());
        for(int i=0;i<x.size()-1;i++){
            if(y[i]==y[i+1])
            return 0;
        }
        return (y==x);
    }
};