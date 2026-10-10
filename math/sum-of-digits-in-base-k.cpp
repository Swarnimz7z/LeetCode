class Solution {
public:
    int sumBase(int n, int k) {
        int x=0;
        int num=n;
        if(n==0)
        return 0;
        int s=0;
        while(num!=0){
            int x=num%k;
            s=s+x;
            num=num/k;
        }
        return s;
    }
};