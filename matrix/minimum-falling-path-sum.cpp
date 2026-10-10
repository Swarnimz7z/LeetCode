class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int s=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 && i!=n-1)
                continue;

                if(i==0 && i==n-1){
                s=min(s,matrix[i][j]);
                continue;
                }

                if(j==0){
                matrix[i][j]+=min(matrix[i-1][j],matrix[i-1][j+1]);
                }
                else if(j==m-1){
                matrix[i][j]+=min(matrix[i-1][j-1],matrix[i-1][j]);
                }
                else{
                    matrix[i][j]+=min(matrix[i-1][j-1],min(matrix[i-1][j],matrix[i-1][j+1]));
                }

                if(i==n-1)
                s=min(s,matrix[i][j]);
            }
        }
        return s;
    }
};