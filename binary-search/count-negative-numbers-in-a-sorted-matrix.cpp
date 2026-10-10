class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;
        for(int i=0;i<n;i++){
            if(grid[i][0]<0){
            c=c+(n-i)*m;
            break;
            }
            for(int j=0;j<m;j++){
                if(grid[i][j]<0){
                c=c+(m-j);
                break;
                }
            }
        }
        return c;

    }
};