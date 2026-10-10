class Solution {
public:
    void Traverse(vector<vector<char>>& isConnected,int i,int j){
        int n=isConnected.size();
        int m=isConnected[0].size();
        if(i<n && j<m && i>=0 && j>=0){
            if(isConnected[i][j]=='1'){
                isConnected[i][j]='2';
                Traverse(isConnected,i+1,j);
                Traverse(isConnected,i,j+1);
                Traverse(isConnected,i,j-1);
                Traverse(isConnected,i-1,j);
            }
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int c=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                c++;
                Traverse(grid,i,j);
                }
            }
        }
        return c;
    }
};