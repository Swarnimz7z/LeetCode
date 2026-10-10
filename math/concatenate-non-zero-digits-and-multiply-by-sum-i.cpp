class Solution {
public:
    long long sumAndMultiply(int n) {
        long long s=0;
        long long x=0;

        while(n){
            if(n%10){
                s+=n%10;
                x=x*10+n%10;
            }
            n/=10;
        }
        while(x){
            n=n*10+x%10;
            x/=10;
        }
        return n*s;
    }
};