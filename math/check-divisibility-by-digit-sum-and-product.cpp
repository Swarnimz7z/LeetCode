class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0;
        int p=1;
        int v=n;
        while(n!=0){
            int m=n%10;
            s=s+m;
            p=p*m;
            n=n/10;
        }
        return (v%(s+p)==0);
    }
};