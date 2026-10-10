class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int s=0;
        int m=x;
        while(x!=0){
            s=s+x%10;
            x=x/10;
        }
        if(m%s!=0){
            s=-1;
        }
        return s;
    }
};