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
    int Traversal(TreeNode* root,int &x,int sum){
        if(root==nullptr){
            return sum;
        }
        int left=max(0,Traversal(root->left,x,sum));

        int right=max(0,Traversal(root->right,x,sum));

        sum=left+right+root->val;

        x=max(sum,x);

        return max(left,right)+root->val;


    }
    int maxPathSum(TreeNode* root) {
        int s=INT_MIN;
        int x=Traversal(root,s,0);
        return s;
    }
};