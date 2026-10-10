class Solution {
public:
    int totalMoney(int n) {
        int i=1;
        int z=0;
        int m=1;
        int s=0;
        while(m<=n){
            s=s+i;
            if(m%7==0){
                i=z;
                i++;
                z=i;
            }
            i++;
            m++;
        }
        return s;
    }
};