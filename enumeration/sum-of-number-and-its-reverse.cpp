class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        int x=0;
        int s=0;
        int z=0;
        for(int i=0;i<=num;i++){
            s=0;
            x=i;
            while(x!=0){
                s=s*10+x%10;
                x=x/10;
            }
            if(s+i==num){
            z=1;
            break;
            }
        }
        return z;
    }
};