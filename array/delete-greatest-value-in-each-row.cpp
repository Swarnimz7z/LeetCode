class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=0;i<n;i++)
        sort(grid[i].begin(),grid[i].end());
        int m=grid[0].size();
        int sum=0;
        for(int i=m-1;i>=0;i--){
            int z=0;
            for(int j=0;j<n;j++){
                z=max(z,grid[j][i]);
            }
            sum+=z;
        }
        return sum;
    }
};