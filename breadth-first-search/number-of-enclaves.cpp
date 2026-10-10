class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int c=0;

        queue<pair<int,int>>q;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || j==0 || i==n-1 || j==m-1) && grid[i][j]==1)
                q.push({i,j});
                else if(grid[i][j]==1)
                c++;
            }
        }

        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};

        while(!q.empty()){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();

            for(int i=0;i<4;i++){
                int nx=x+dx[i];
                int ny=y+dy[i];

                if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==1){
                q.push({nx,ny});
                grid[nx][ny]=0;
                
                if(nx!=0 && ny!=0 && nx!=n-1 && ny!=m-1)
                c--;
                }
            }
        }
        return c;
    }
};