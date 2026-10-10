class Solution {
public:
    bool judgeCircle(string moves) {
        vector<int> x(2,0);
        for(int i=0;i<moves.length();i++){           
            if(moves[i]=='U'){
                x[1]=x[1]+1;
            }
            else if(moves[i]=='D'){
                x[1]=x[1]-1;
            }
            else if(moves[i]=='R'){
                x[0]=x[0]+1;
            }
            else{
                x[0]=x[0]-1;
            }
        }
        if(x[0]==0 && x[1]==0)
        return true;
        return false;
    }
};