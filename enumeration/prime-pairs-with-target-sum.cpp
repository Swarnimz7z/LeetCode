class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> z(n+1,true);
        vector<vector<int>> v;
        vector<int> x;
        z[0]=false;
        z[1]=false;
        for(int i=2;i*i<=n;i++){
            int s=0;
            if(z[i]){
            for(int j=i*i;j<=n;j+=i){
                z[j]=false;
            }
            }
        }
        int m=n;
        for(int i=2;i<n;i++){
            if(z[i] && z[m-i]){
                x.push_back(i);
                x.push_back(m-i);
                n=m-i;
                v.push_back(x);
                x.clear();
            }
        }
        return v;
    }
};