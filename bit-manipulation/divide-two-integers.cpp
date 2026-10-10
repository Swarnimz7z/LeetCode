class Solution {
public:
    long divide(int dividend, int divisor) {
        long d=(long)dividend;
        long div=(long)divisor;
        long q=(d/div);
        long max=pow(2,31)-1;
        if(q>max){
            q=max;
        }
        return q;
    }
};