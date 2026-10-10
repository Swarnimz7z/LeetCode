class Solution {
public:
    int reverse(int x) {
        int n=x;
        long s=0;
        while(n!=0){
            int m=n%10;
            if((s*10+m)<=pow(2,31)-1 && (s*10+m)>=pow(-2,31))
            {
                s=s*10+m;
            }
            else{
                s=0;
            }
            n=n/10;
        }
        return s;
    }
};