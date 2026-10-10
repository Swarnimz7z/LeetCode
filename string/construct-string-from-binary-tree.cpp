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
    void Traversal(TreeNode* root,string &s){
        if(root==nullptr)
        return;
        s=s+"("+to_string(root->val);

        if(root->left==nullptr&& root->right==nullptr){
        s=s+")";
        return;
        }
        if(root->left==nullptr)
        s=s+"()";
        else
        Traversal(root->left,s);

        Traversal(root->right,s);

        s=s+")";
    }
    string tree2str(TreeNode* root) {
        string s="";
        Traversal(root,s);
        return s.substr(1,s.length()-2);
    }
};