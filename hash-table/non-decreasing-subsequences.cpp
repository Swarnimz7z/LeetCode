class Solution {
public:
    void Subset(set<vector<int>> &z,vector<int> y,vector<int> &x,int v){
        int n=y.size();
        if(v==x.size()){
            if(n>1)
            z.insert(y);
            return;
        }
        int s=0;
        if(n==0){
        y.push_back(x[v]);
        s=1;
        }
        else if(x[v]>=y[n-1]){
        y.push_back(x[v]);
        s=1;
        }
        Subset(z,y,x,v+1);
        if(s==1){
        y.pop_back();
        Subset(z,y,x,v+1);
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> z;
        vector<int> y;
        Subset(s,y,nums,0);
        z=vector(s.begin(),s.end());
        return z;
    }
};