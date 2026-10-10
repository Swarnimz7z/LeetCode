class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    queue<pair<int,int>> rottenOranges;
    int n=grid.size();
    int m=grid[0].size();
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (grid[i][j]==2) 
            rottenOranges.push({i,j});
        }
    }
    vector<pair<int,int>> dirs = {{0,1},{1,0},{0,-1},{-1,0}};
    int timeTaken = 0;
    while(!rottenOranges.empty()){
        bool rotted = false;
        int numberOfRottenOranges = rottenOranges.size();
        while(numberOfRottenOranges--){
            auto rottenOrange = rottenOranges.front();
            rottenOranges.pop();
            for (auto dir : dirs){
                int nrow = rottenOrange.first + dir.first;
                int ncol = rottenOrange.second + dir.second;
                if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && grid[nrow][ncol] == 1){
                    grid[nrow][ncol] = 2;
                    rottenOranges.push({nrow,ncol});
                    rotted = true;
                }
            }
        }
        if (rotted) timeTaken++;
    }
     for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(grid[i][j]==1)
            return -1;
        }
    }
    return timeTaken;
    }
};