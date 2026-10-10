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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*> x;
        int n=descriptions.size();
        int Tot=0;
        int par=0;
        unordered_map<int,TreeNode*> z;

        for(int i=0;i<n;i++){
            if(x[descriptions[i][0]]==nullptr){
                TreeNode* root=new TreeNode(descriptions[i][0]);
                x[root->val]=root;
                Tot+=descriptions[i][0];
            }
            if(x[descriptions[i][1]]==nullptr){
                TreeNode* root=new TreeNode(descriptions[i][1]);
                x[root->val]=root;
                Tot+=descriptions[i][1];
            }
            if(z[descriptions[i][1]]==nullptr){
                z[descriptions[i][1]]=x[descriptions[i][1]];
                par+=descriptions[i][1];
            }
            if(descriptions[i][2]==1)
            x[descriptions[i][0]]->left=x[descriptions[i][1]];
            else
            x[descriptions[i][0]]->right=x[descriptions[i][1]];
        }

        return x[Tot-par];
    }
};