class Solution {
public:
    bool isPowerOfThree(int n) {
        int z=0;
        for(int i=0;i<20;i++){
            if(n==pow(3,i)){
                z=1;
            }
        }
        return z;
    }
};