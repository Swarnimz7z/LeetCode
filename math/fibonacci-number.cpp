class Solution {
public:
    int fib(int n) {
        int r=0;
        int s=1;
        int z;
        for(int i=2;i<=n+1;i++){
            z=s;
            s=s+r;
            r=z;
        }
        return r;
    }
};