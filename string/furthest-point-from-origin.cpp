class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int x=0;
        int y=0;
        int n=moves.length();
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='L')
            x++;
            if(moves[i]=='R')
            y++;
        }
        int z=0;
        if(x>=y)
        z=n-y-y;
        else
        z=n-x-x;
        return z;
    }
};