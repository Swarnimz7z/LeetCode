class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> z;
        vector<int>x;
        createSubset(z,x,n,1,k);    
        return z;  
    }

    void createSubset(vector<vector<int>>&z,vector<int>&y,int& n,int v,int& k){
        if(v==n+1){
            if(y.size()==k)
            z.push_back(y);
            return;
        }
        y.push_back(v);

        createSubset(z,y,n,v+1,k);

        y.pop_back();

        createSubset(z,y,n,v+1,k);

    }
};