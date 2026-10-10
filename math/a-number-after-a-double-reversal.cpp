class Solution {
public:
    bool isSameAfterReversals(int num) {
        int x=0;
        int m=num;
        long s=0;
        while(m!=0){
            s=s*10+m%10;
            m=m/10;
        }
        m=s;
        s=0;
        while(m!=0){
            s=s*10+m%10;
            m=m/10;
        }
        if(s==num){
            x=1;
        }
        return x;
    }
};