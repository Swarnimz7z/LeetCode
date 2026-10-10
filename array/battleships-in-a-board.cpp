class Solution {
public:
    void Traverse(vector<vector<char>>& isConnected,int i,int j){
        int n=isConnected.size();
        int m=isConnected[0].size();
        if(i<n && j<m && i>=0 && j>=0){
            if(isConnected[i][j]=='X'){
                isConnected[i][j]='Z';
                Traverse(isConnected,i+1,j);
                Traverse(isConnected,i,j+1);
                Traverse(isConnected,i,j-1);
                Traverse(isConnected,i-1,j);
            }
        }
        return;
    }
    int countBattleships(vector<vector<char>>& board) {
        int c=0;
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='X'){
                c++;
                Traverse(board,i,j);
                }
            }
        }
        return c;
    }
};