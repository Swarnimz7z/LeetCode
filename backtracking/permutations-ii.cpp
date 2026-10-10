class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> z;
        vector<int>x;
        createPermutation(z,nums,0);
        vector<vector<int>> s;
        s=vector(z.begin(),z.end());
        return s;  
    }

    void createPermutation(set<vector<int>>&z,vector<int>x,int v){
        if(v==x.size()){
            z.insert(x);
            return;
        }
        for(int i=v;i<x.size();i++){
            swap(x[i],x[v]);

         createPermutation(z,x,v+1);

            swap(x[i],x[v]);
        }

    }
};