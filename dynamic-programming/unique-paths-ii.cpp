class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1)
        return 0;
        int z=0;
        int v=0;
        for(int i=0;i<n;i++){
            int z=0;
            for(int j=0;j<m;j++){
                if(i==0){
                    if(z==1){
                    obstacleGrid[i][j]=0;
                    continue;
                    }
                    if(obstacleGrid[i][j]==1){
                    obstacleGrid[i][j]=0;
                    z=1;
                    }
                    else
                    obstacleGrid[i][j]=1;
                }
                else if(j==0){
                    if(v==1){
                    obstacleGrid[i][j]=0;
                    continue;
                    }
                    if(obstacleGrid[i][j]==1){
                    obstacleGrid[i][j]=0;
                    v=1;
                    }
                    else
                    obstacleGrid[i][j]=1;
                }
                else{
                    if(obstacleGrid[i][j]==1){
                        obstacleGrid[i][j]=0;
                    continue;
                    }
                    obstacleGrid[i][j]=obstacleGrid[i-1][j]+obstacleGrid[i][j-1];
                }

            }
        }
        return obstacleGrid[n-1][m-1];
    }
};