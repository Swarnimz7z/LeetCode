class Solution {
public:
    bool judgeSquareSum(int c) {
        int x=0;
        for(long i=0;i*i<=c;i++){
            int s=c-pow(i,2);
            double x=sqrt(s);
            if(trunc(x)==x){
                c=-1;
                break;
            }
        }
        if(c==-1){
            x=1;
        }
        return x;
    }
};