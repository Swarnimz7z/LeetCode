class Solution {
public:
    void createSubset(vector<vector<int>> &z,vector<int>& x,vector<int>& y,int v,int sum,int &target){
        if(sum>=target || v>=y.size()){
            if(sum==target)
            z.push_back(x);
            return;
        }

        x.push_back(y[v]);
        createSubset(z,x,y,v+1,sum+y[v],target);
        x.pop_back();
        while(v<y.size()-1 && y[v]==y[v+1]){
            v++;
        }
        createSubset(z,x,y,v+1,sum,target);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> z;
        sort(candidates.begin(),candidates.end());
        vector<int>x;
        int s=0;
        createSubset(z,x,candidates,0,0,target);
        return z;
    }
};