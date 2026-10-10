class Solution {
public:
    bool isPowerOfTwo(int n) {
        int z=1;
        if(n>=1){
        double x=log2(n);
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