class Solution {
public:
    int longestString(int x, int y, int z) {
        if(y>x){
            y=x+1;
        }
        else if(x>y){
            x=y+1;
        }
        return 2*(x+y+z);
    }
};