class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums)  {
        vector<vector<int>> z;
        vector<int>x;
        createPermutation(z,nums,0);    
        return z;  
    }

    void createPermutation(vector<vector<int>>&z,vector<int>x,int v){
        if(v==x.size()){
            z.push_back(x);
            return;
        }
        for(int i=v;i<x.size();i++){
            swap(x[i],x[v]);

         createPermutation(z,x,v+1);

            swap(x[i],x[v]);
        }

    }

};