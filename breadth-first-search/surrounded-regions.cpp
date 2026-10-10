class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        int c=0;

        queue<pair<int,int>>q;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || j==0 || i==n-1 || j==m-1) && board[i][j]=='O'){
                q.push({i,j});
                board[i][j]='0';
                }
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

                if(nx>=0 && nx<n && ny>=0 && ny<m && board[nx][ny]=='O'){
                q.push({nx,ny});

                board[nx][ny]='0';
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O'){
                board[i][j]='X';
                }
                if(board[i][j]=='0'){
                board[i][j]='O';
                }
            }
        }
    }
};