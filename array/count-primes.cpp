class Solution {
public:
    int countPrimes(int n) {
        vector<bool> z(n+1,true);
        for(int i=2;i*i<=n;i++){
            if(z[i]){
                for(int j=i*i;j<=n;j+=i){
                    z[j]=false;
                }
            }
        }
        int s=0;
        for(int i=2;i<n;i++){
            if(z[i]){
                s++;
            }
        }
        return s;
    }
};