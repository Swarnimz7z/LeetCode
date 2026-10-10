class Solution {
public:
    void Traverse(vector<vector<char>>&board,string z,string& word,bool &x,int i,int j){
        if(x)
        return;

        if(board[i][j]!=word[z.size()])
        return;

        char temp;
        
        if(board[i][j]!='1'){
        temp=board[i][j];
        board[i][j]='1';
        }
        else
        return;

        z=z+temp;
        if(word==z){
            x=true;
        }

        if(j!=board[i].size()-1)
        Traverse(board,z,word,x,i,j+1);
        if(i!=board.size()-1)
        Traverse(board,z,word,x,i+1,j);
        if(i!=0)
        Traverse(board,z,word,x,i-1,j);
        if(j!=0)
        Traverse(board,z,word,x,i,j-1);

        board[i][j]=temp;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        
        bool x=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                Traverse(board,"",word,x,i,j);
                if(x)
                return x;
            }
        }
        return x;
    }
};