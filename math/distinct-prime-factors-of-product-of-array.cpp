class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        int n=0;
        vector<int>x;
        for(auto it:nums){
            if(it>=n)
            n=it;
        }
        vector<bool> z(n+1,true);
        for(int i=2;i<=n;i++){
            if(z[i]){
                x.push_back(i);
            for(int j=i*i;j<=n;j+=i){
                z[j]=false;
            }
            }
        }
        int c=0;
        for(auto v:x){
            for(auto it:nums){
                if(it%v==0){
                    c++;
                    break;
                }
            }
        }
        return c;
    }
};