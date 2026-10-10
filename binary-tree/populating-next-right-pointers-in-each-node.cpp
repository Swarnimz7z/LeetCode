/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    vector<vector<Node*>> z;

    void Traverse(Node* root,int n){
        if(z.size()<=n){
        z.resize(n+1);
        }

        if(root==nullptr)
        return;

        if(root->left!=nullptr){
        if(!z[n].empty())
        z[n][z[n].size()-1]->next=root->left;
        z[n].push_back(root->left);
        }

        if(root->right!=nullptr){
        if(!z[n].empty())
        z[n][z[n].size()-1]->next=root->right;
        z[n].push_back(root->right);
        }

        Traverse(root->left,n+1);

        Traverse(root->right,n+1);

    }
    Node* connect(Node* root) {
        if(root==nullptr)
        return root;

        vector<Node*> x={root};

        z.push_back(x);
        Traverse(root,1);

        return root;
    }
};