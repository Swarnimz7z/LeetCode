class Solution {
public:
    void createSubset(set<vector<int>>&z,vector<int>x,vector<int>y,int v){
        if(v==x.size()){
            z.insert(y);
            return;
        }
        createSubset(z,x,y,v+1);

        y.push_back(x[v]);

        createSubset(z,x,y,v+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>z;
        vector<vector<int>>z1;
        vector<int> x;
        createSubset(z,nums,x,0);
        for(auto it:z){
            z1.push_back(it);
        }
        return z1;

    }
};