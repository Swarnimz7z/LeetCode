class Solution {
public:
    int count(int n){
        int c=0;
        while(n!=0){
            n=n/10;
            c++;
        }
        return c;
    }
    int sum(int n){
        int s=0;
        while(n!=0){
            s=s+n%10;
            n=n/10;
        }
        return s;
    }
    int countSymmetricIntegers(int low, int high) {
        int c=0;
        for(int i=low;i<=high;i++){
        int x=0;
        int y=1;            
            int n=count(i);
            if(n%2==0){
                int z=pow(10,n/2);
                x=sum(i/z);
                y=sum(i%z);
            }
            if(x==y){
                c++;
            }
        }
        return c;
    }
};