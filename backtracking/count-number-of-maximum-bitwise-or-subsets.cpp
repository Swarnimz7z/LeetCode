class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        vector<vector<int>> z;
        unordered_map<int,int> y;
        y[0]=0;
        int g=0;
        createSubset(z,nums,y,0,0,g);    
        return y[g];  
    }

    void createSubset(vector<vector<int>>&z,vector<int>x,unordered_map<int,int>& y,int s,int v,int& g){
        if(v==x.size()){
            return;
        }
        createSubset(z,x,y,s,v+1,g);
        s=s|x[v];
        g=max(g,s);
        y[s]++;
        createSubset(z,x,y,s,v+1,g);
    }  
};