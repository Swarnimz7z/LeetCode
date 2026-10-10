class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> z;
        vector<int>x;
        createSubset(z,nums,x,0);    
        return z;  
    }

    void createSubset(vector<vector<int>>&z,vector<int>x,vector<int>y,int v){
        if(v==x.size()){
            z.push_back(y);
            return;
        }
        createSubset(z,x,y,v+1);

        y.push_back(x[v]);

        createSubset(z,x,y,v+1);
    }  
};