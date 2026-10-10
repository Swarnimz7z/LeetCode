class Solution {
public:
    int minBitFlips(int start, int goal) {
        int z=(start^goal);
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