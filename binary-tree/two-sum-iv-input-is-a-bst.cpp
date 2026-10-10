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
    void Traversal(TreeNode* root,vector<int>&z,map<int,int>&x){
        if(root==nullptr){
            return;
        }

        Traversal(root->left,z,x);
        
        z.push_back(root->val);
        x[root->val]++;
        
        Traversal(root->right,z,x);
    }
    bool findTarget(TreeNode* root, int k) {
        map<int,int> x;
        vector<int> z;
        Traversal(root,z,x);
        for(auto it:z){
            if(x[k-it] && k-it!=it)
            return 1;
        }
        return 0;
    }
};