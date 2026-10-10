class Solution {
public:
    long long coloredCells(int n) {
        long long x=n;
        return x*x+(x-1)*(x-1);
    }
};