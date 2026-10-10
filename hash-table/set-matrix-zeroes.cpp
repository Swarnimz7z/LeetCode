class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>x;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    x.push_back(i);
                    x.push_back(j);
                }
            }
        }
        for(int i=0;i<x.size();i+=2){
            int v=x[i];
            int w=x[i+1];
            for(int s=0;s<max(m,n);s++){
                if(s<m){
                matrix[v][s]=0;
                }
                if(s<n){
                matrix[s][w]=0;
                }
            }
        }
    }
};