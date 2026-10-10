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
    void Traverse(TreeNode* root,vector<vector<int>> &z,int n){
        if(z.size()<=n){
            z.resize(n+1);
        }
        if(root==nullptr){
            z[n].push_back(-1);
        return;
        }
        z[n].push_back(root->val);

        Traverse(root->left,z,n+1);

        Traverse(root->right,z,n+1);
    }
    bool isCompleteTree(TreeNode* root) {
        vector<vector<int>> z;
        // z.push_back(1);
        Traverse(root,z,0);
        for(int i=0;i<z.size()-1;i++){
            for(int j=0;j<z[i].size();j++){
                if(i!=z.size()-2){
                if(z[i][j]==-1)
                return 0;
                }
                else{
                    if(j!=z[i].size()-1)
                    if(z[i][j]==-1)
                    if(z[i][j+1]!=-1)
                    return 0;
                }
                
            }
            cout<<endl;
        }
        return 1;
    }
};