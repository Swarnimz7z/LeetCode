class Solution {
public:
    int mod=1000000007;
    int c=0;
    long long pow(long long base,int exp) {
        long long res = 1;

        while(exp){
            if(exp&1)
            res=res*base%mod;
            base=base*base%mod;
            exp>>= 1;
        }

        return res;
    }
    int DFS(int &i,vector<vector<int>>&x,int d){
        int n=x.size();
        c=max(c,d);
        for(auto it:x[i]){
            DFS(it,x,d+1);
        }
        return d;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<vector<int>> x(n+1,vector<int>());

        for(int i=0;i<n;i++)
        x[edges[i][0]-1].push_back(edges[i][1]-1);

        int d=0;
        while(x[d].size()==0)
        d++;

        DFS(d,x,d);

        return pow(2,c-1);
    }
};