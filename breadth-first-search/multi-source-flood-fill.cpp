class Solution {
public:
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        queue<pair<pair<int,int>,pair<int,int>>> q;
        int x=sources.size();
        vector<vector<int>> grid(n,vector<int>(m,0));
        vector<vector<int>> z(n,vector<int>(m,-1));

        for(int i=0;i<x;i++){
            q.push({{sources[i][0],sources[i][1]},{sources[i][2],0}});
            grid[sources[i][0]][sources[i][1]]=sources[i][2];
            z[sources[i][0]][sources[i][1]]=0;
        }

        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};

        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int col=q.front().second.first;
            int t=q.front().second.second;
            q.pop();
            for(int i=0;i<4;i++){
                int nx=r+dx[i];
                int ny=c+dy[i];

                if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]<col && (z[nx][ny]==-1 || z[nx][ny]==t+1)){
                    grid[nx][ny]=col;
                    z[nx][ny]=t+1;
                    q.push({{nx,ny},{col,t+1}});
                }
            }
        }
        return grid;
    }
};