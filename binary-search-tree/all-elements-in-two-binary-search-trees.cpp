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
    void Traversal(TreeNode* root,multiset<int>&z){
        if(root==nullptr){
            return;
        }

        Traversal(root->left,z);
        
        z.insert(root->val);
        
        Traversal(root->right,z);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        multiset<int> x;
        Traversal(root1,x);
        Traversal(root2,x);
        vector<int> z=vector(x.begin(),x.end());
        return z;
    }
};