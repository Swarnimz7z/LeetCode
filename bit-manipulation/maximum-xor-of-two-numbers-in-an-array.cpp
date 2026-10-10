class Solution {
public:
    struct Node{
        Node*trie[2]={nullptr};
    };
    int findMaximumXOR(vector<int>& nums) {
        Node* root=new Node();
        for(auto it:nums){
            int n=it;
            Node*trie=root;
            for(int i=31;i>=0;i--){
                int bit=(n>>i)&1;
                if(trie->trie[bit]==nullptr)
                {
                    Node* temp=new Node();
                    trie->trie[bit]=temp;
                }
                trie=trie->trie[bit];
            }
        }

        int v=0;

        for(auto it:nums){
            Node*trie=root;
            int x=0;
            for(int i=31;i>=0;i--){
                int bit=(it>>i)&1;

                if(trie->trie[1-bit]!=nullptr)
                {
                    x=x|(1<<i);
                    trie=trie->trie[1-bit];
                }
                else
                trie=trie->trie[bit];
            }
            v=max(v,x);
        }
        return v;
    }
};