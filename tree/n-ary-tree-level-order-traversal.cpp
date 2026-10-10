/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void Traverse(Node* root,vector<vector<int>> &z,int n){
        if(root==nullptr)
        return;
        if(z.size()<=n){
            z.resize(n+1);
        }
        for(int i=0;i<(root->children).size();i++){
            if(root->children[i]!=nullptr)
            z[n].push_back(root->children[i]->val);
            Traverse(root->children[i],z,n+1);
        }

    }
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> z;
        if(root==nullptr)
        return z;
        vector<int> x={root->val};
        z.push_back(x);
        Traverse(root,z,1);
        z.resize(z.size()-1);
        return z;
    }
};