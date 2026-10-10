class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0 || k%5==0)
        return -1;
        long long s=0;
        int n=0;
        int x=0;
        while(true){
            s=x*10+1;
            x=s%k;
            n++;
            if(x==0)
            return n;
        }
        return -1;
    }
};