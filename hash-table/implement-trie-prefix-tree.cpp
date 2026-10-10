class Trie {
public:
    struct Node{
    Node* trie[26]={nullptr};

    bool flag=false;
    };
    Node* trie;
    Trie() {
        trie=new Node();
    }
    
    void insert(string word) {
        Node* node=trie;
        for(auto it:word){
            if(node->trie[it-'a']==nullptr){
            Node* temp=new Node();
            node->trie[it-'a']=temp;
            }
            node=node->trie[it-'a'];
        }
        node->flag=true;
        
    }
    
    bool search(string word) {
        Node* node=trie;
        for(auto it:word){
            if(node->trie[it-'a']==nullptr)
            return false;
            node=node->trie[it-'a'];
        }
        if(node->flag==true)
        return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        Node* node=trie;
        for(auto it:prefix){
            if(node->trie[it-'a']==nullptr)
            return false;
            node=node->trie[it-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */