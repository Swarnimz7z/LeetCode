class Solution {
public:
    bool validDigit(int n, int x) {
        int c=0;
        while(n){
            if(n/10==0)
            if(n%10==x)
            return false;
            if(n%10==x)
            c=1;
            n=n/10;
        }
        if(c==1)
        return true;
        return false;
    }
};