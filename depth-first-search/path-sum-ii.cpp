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
    vector<vector<int>>z;

    void Traverse(vector<int> v,TreeNode* root,int &s,int x){
        if(root==nullptr)
        return;

        x+=root->val;
        v.push_back(root->val);
        if(root->left==nullptr && root->right==nullptr){
            if(s==x)
            z.push_back(v);
            return;
        }
        Traverse(v,root->left,s,x);
        Traverse(v,root->right,s,x);

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> v;
        if(root!=nullptr)
        Traverse(v,root,targetSum,0);
        return z;
    }
};