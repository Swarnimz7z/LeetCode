class Solution {
public:
    void createSubset(vector<vector<int>>&z,vector<int>x,vector<int>y,int k,int v,int sum,int target){
        if(v==x.size()){
            if(sum==target && y.size()==k)
            z.push_back(y);
            return;
        }
        createSubset(z,x,y,k,v+1,sum,target);
        if(sum+x[v]>target)
        return;
        if(y.size()==k)
        return;
        y.push_back(x[v]);
        sum+=x[v];
        createSubset(z,x,y,k,v+1,sum,target);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> z;
        vector<int> nums={1,2,3,4,5,6,7,8,9};
        vector<int>x;
        int s=0;
        createSubset(z,nums,x,k,0,s,n);
        return z;
    }
};