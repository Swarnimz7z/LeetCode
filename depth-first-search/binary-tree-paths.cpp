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
    vector<string>z;

    void Traverse(string v,TreeNode* root){
        if(root==nullptr)
        return;

        v+=to_string(root->val);
        if(root->left==nullptr && root->right==nullptr){
            z.push_back(v);
            return;
        }
        v+="->";
        Traverse(v,root->left);
        Traverse(v,root->right);

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string v="";
        if(root!=nullptr)
        Traverse(v,root);
        return z;
    }
};