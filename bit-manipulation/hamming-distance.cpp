class Solution {
public:
    int hammingDistance(int x, int y) {
        int z=(x^y);
        int c=0;
        while(z!=0){
            int v=z%2;
            if(v==1)
            c++;
            z=z/2;
        }
        return c;
    }
};