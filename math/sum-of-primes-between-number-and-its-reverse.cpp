class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int x=0;
        int m=n;

        while(m!=0){
            x=x*10+m%10;
            m=m/10;
        }
        m=min(x,n);
        n=max(x,n);
        x=m;

        vector<int>z(n+1,1);
        for(int i=2;i*i<=n;i++){
            for(int j=i*2;j<=n;j+=i){
            if(z[j])
            z[j]=0;
            }
        }

        int s=0;
        for(int i=max(2,x);i<=n;i++){
            if(z[i]){
            s+=i;
            }
        }

        return s;
    }

};