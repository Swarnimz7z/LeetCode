class Solution {
public:
    void Unique(vector<int>& x,int n){
        int z=0;
        for(int i=1;i<=n;i++){
            z=z+x[n-i]*x[i-1];
        }
        x[n]=z;
        return;
    }
    int numTrees(int n) {
        vector<int> x(n+1,0);
        x[0]=1;
        int z=0;
        for(int i=1;i<=n;i++){
            if(x[i]==0)
            Unique(x,i);
        }
        return x[n];
        
    }
};