class Solution {
public:
    int Calc(vector<int>&dp,int v){
        if(dp[v]!=INT_MAX)
        return dp[v];

        double x=floor(sqrt(v));
        for(int i=(int)x;i>=0;i--){
            dp[i*i]=1;
            dp[v]=min(dp[v],Calc(dp,v-i*i)+1);
        }
        return dp[v];
    }
    int numSquares(int n) {
        vector<int> dp(n+1,INT_MAX);
    
        int x=Calc(dp,n);
        return x;
    }
};