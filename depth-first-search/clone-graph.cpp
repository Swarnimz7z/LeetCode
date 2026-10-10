/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<int,Node*> y;
    unordered_map<int,int> x;
    Node* z=new Node();

    void Neighbour(Node* node){
        if(x[node->val]==1)
        return;

        x[node->val]=1;
        Node* root=new Node(node->val);
        y[node->val]=root;

        for(auto it:node->neighbors){
        // cout<<node->val<<":"<<it->val<<endl;
        Neighbour(it);
        cout<<y[it->val]->val<<endl;
        root->neighbors.push_back(y[it->val]);
        }

        z=root;

    }

    Node* cloneGraph(Node* node) {
    if(node==nullptr)
    return nullptr;

    Neighbour(node);

    return y[node->val];
    }
};