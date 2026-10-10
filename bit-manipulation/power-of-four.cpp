class Solution {
public:
    bool isPowerOfFour(int n) {
        int z=1;
        if(n>=4 || n==1){
        double x=log(n)/log(4);
        long y=x;
        if(x-trunc(x)!=0){
            z=0;
        }
        }
        else{
            z=0;
        }
        return z;
    }
};