class Solution {
public:
    int climbStairs(int n) {
        int r=1;
        long s=1;
        int z=0;
        for(int i=0;i<n;i++){
            z=s;
            s=s+r;
            r=z;
        }
        return r;
    }
};