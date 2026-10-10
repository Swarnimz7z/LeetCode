class Solution {
public:
    void CreateSubset(vector<int>x,int v,long s,vector<int>&z,int n){
        if(s>n)
        return;
        if(v==x.size()){
            if(s==n)
            z.push_back(1);
            return;
        }
        CreateSubset(x,v+1,s,z,n);
        s=s+pow(3,x[v]);
        CreateSubset(x,v+1,s,z,n);
    }
    bool checkPowersOfThree(int n) {
        vector<int> z;
        vector<int> x;
        long y=0;
        for(int i=0;i<=16;i++){
            y=pow(3,i);
            if(y<=n)
            x.push_back(i);
            else
            break;
        }
        CreateSubset(x,0,0,z,n);
        int v=z.size();
        return v;
    }
};