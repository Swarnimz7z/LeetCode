class Solution {
public:
    void Traverse(int& n,int x,vector<int>& z){
        if(x>n)
        return;
        if(x%10==9){
            z.push_back(x);
            Traverse(n,x*10,z);
            
        return;
        }
        
        if(z.size()==n)
        return;
        z.push_back(x);
        Traverse(n,x*10,z);
        Traverse(n,x+1,z);
    }
    vector<int> lexicalOrder(int n) {
        vector<int> x;
        Traverse(n,1,x);
        return x;
    }
};