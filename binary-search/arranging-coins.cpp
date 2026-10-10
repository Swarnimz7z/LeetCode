class Solution {
public:
    int arrangeCoins(int n) {
        int z=0;
        long s=0;
        while(s<=n){
            z++;
            s=s+z;
        }
        return z-1;
    }
};