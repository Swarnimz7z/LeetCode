class Solution {
    void createSubset(set<vector<int>>&z,vector<int>x,vector<int>y,int v,int sum,int target){
        if(sum>=target){
            if(sum==target)
            z.insert(y);
            return;
        }
        if(v==x.size())
        return;
        createSubset(z,x,y,v+1,sum,target);

        y.push_back(x[v]);
        sum+=x[v];
        
        createSubset(z,x,y,v,sum,target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        set<vector<int>> z;
        vector<int>x;
        int s=0;
        for(int i=0;i<candidates.size();i++)
        createSubset(z,candidates,x,i,s,target);
        vector<vector<int>> v=vector(z.begin(),z.end());
        return v;
    }
};