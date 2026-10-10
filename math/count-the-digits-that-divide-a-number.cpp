class Solution {
public:
    int countDigits(int num) {
        int c=0;
        int m=num;
        while(m!=0){
            int x=m%10;
            if(x==0){
                x=0;
            }
            else{
                if(num%x==0){
                    c++;
                }
            }
            m=m/10;
            }
    return c;
    }
};