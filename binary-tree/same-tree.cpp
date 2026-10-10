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
    void Traversal(TreeNode* root,vector<int>&z){
        if(root==nullptr){
            z.push_back(101);
            return;
        }
        z.push_back(root->val);
        
        Traversal(root->left,z);
        
        Traversal(root->right,z);

    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> z;
        vector<int> v;
        Traversal(p,z);
        Traversal(q,v);
        return z==v; 
    }
};