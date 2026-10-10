class Solution {
public:
    void Traverse(vector<vector<int>>& isConnected,vector<int>& x,int i){
        x[i]=1;
        int n=x.size();
        for(int j=0;j<n;j++){
            if(x[j]==0 && isConnected[i][j]){
            Traverse(isConnected,x,j);
            }
        }
        return;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int c=0;
        int n=isConnected.size();
        vector<int> x(n,0);
        for(int i=0;i<n;i++){
            if(x[i]==0){
            c++;
            Traverse(isConnected,x,i);
            }
        }
        return c;
    }
};