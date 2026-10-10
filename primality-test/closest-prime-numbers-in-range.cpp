class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> z(right+1,true);
        vector<int> y;
        int n=right;
        for(int i=2;i*i<=n;i++){
            if(z[i]){
                for(int j=i*i;j<=n;j+=i){
                    z[j]=false;
                }
            }
        }
        int s=0;
        int x=0;
        int min=0;
        int r=0;
        int t=0;
        if(left<2){
            left=2;
        }
        for(int i=left;i<=n;i++){
            if(z[i]){
                if(x==0){
                x=i;
                continue;
                }
                if(min==0){
                    min=i-x;
                    r=x;
                    t=i;
                }
                if((i-x)<min){
                    r=x;
                    t=i;
                    min=i-x;
                }
                if(min==2){
                    break;
                }
                x=i;
            }
        }
        if(r==0 && t==0){
            r=t=-1;
        }
        y.push_back(r);
        y.push_back(t);
        return y;
    }
};