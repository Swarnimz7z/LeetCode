class Solution {
public:
    int count(int n){
        int c=0;
        while(n!=0){
            if(n%2==1)
            c++;
            n=n/2;
        }
        return c;
    }
    int countPrimeSetBits(int left, int right) {
        int c=0;
        for(int i=left;i<=right;i++){
            int x=count(i);
            if(x==2 || x==3 ||x==5 ||x==7 ||x==11 ||x==13 ||x==17 ||x==19)
            c++;
        }
        return c;
    }
};